/*
 * XREFs of NtGdiEngCreateBitmap @ 0x1C015CF30
 * Callers:
 *     <none>
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0082F38 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C00838AC (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?ValidUmpdSizl@@YAHUtagSIZE@@_N@Z @ 0x1C015D0EC (-ValidUmpdSizl@@YAHUtagSIZE@@_N@Z.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0288330 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

HBITMAP __fastcall NtGdiEngCreateBitmap(SIZEL sizl, LONG a2, unsigned int a3, int a4, char *Address)
{
  HBITMAP Bitmap; // r15
  __int64 v9; // rdx
  unsigned int v10; // rcx^4
  __int64 v11; // r8
  unsigned __int64 v12; // r14
  FLONG v13; // esi
  struct _EPROCESS *CurrentProcess; // rax
  char *v16; // rcx
  struct _EPROCESS *v17; // rax
  __int64 v18; // rdx
  BOOL v19; // [rsp+30h] [rbp-78h]
  HANDLE SecureHandle; // [rsp+38h] [rbp-70h]
  _BYTE v21[32]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v22; // [rsp+68h] [rbp-40h]

  Bitmap = 0LL;
  SecureHandle = 0LL;
  v19 = 1;
  if ( !(unsigned int)ValidUmpdSizl(sizl, 1) )
    return 0LL;
  v12 = v11 * v10;
  if ( v12 > 0xFFFFFFFF )
    return 0LL;
  if ( gUMPDSecurityLevel != 2 )
  {
    if ( !gUMPDSecurityLevel
      || (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v9, v11),
          !(unsigned int)bIsProcessLocalSystem(CurrentProcess)) )
    {
      if ( (a4 & 0x80u) != 0 )
      {
        if ( gfUMPDDebug )
          DbgPrint(
            "clientcore\\windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngCreateBitmap:BMF_UMPDMEM is set.\n",
            1149);
        a4 &= ~0x80u;
      }
    }
  }
  if ( Address )
  {
    v13 = a4 & 0xFFFFFFF7;
    if ( (_DWORD)v12 )
    {
      v16 = &Address[(unsigned int)v12];
      if ( (unsigned __int64)v16 > MmUserProbeAddress || v16 < Address )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    SecureHandle = MmSecureVirtualMemory(Address, (unsigned int)v12, 4u);
    v19 = SecureHandle != 0LL;
  }
  else
  {
    if ( gUMPDSecurityLevel != 2 )
    {
      if ( !gUMPDSecurityLevel
        || (v17 = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v9, v11),
            !(unsigned int)bIsProcessLocalSystem(v17)) )
      {
        if ( !a3 || a3 > 6 )
        {
          if ( gfUMPDDebug )
            DbgPrint(
              "clientcore\\windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngCreateBitmap:Creating compressed su"
              "rface without input buffer\n",
              1185);
          v19 = 0;
        }
      }
    }
    v13 = a4 | 8;
    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 72) )
      v13 |= 0x80u;
  }
  if ( v19 )
    Bitmap = EngCreateBitmap(sizl, a2, a3 | 0x8000, v13, Address);
  if ( SecureHandle )
  {
    if ( Bitmap )
    {
      SURFREF::SURFREF((SURFREF *)v21, (HSURF)Bitmap);
      if ( v22 )
      {
        *(_QWORD *)(v22 + 144) = SecureHandle;
      }
      else
      {
        MmUnsecureVirtualMemory(SecureHandle);
        EngDeleteSurface((HSURF)Bitmap);
        Bitmap = 0LL;
      }
      SURFREF::~SURFREF((SURFREF *)v21, v18);
    }
    else
    {
      MmUnsecureVirtualMemory(SecureHandle);
    }
  }
  return Bitmap;
}
