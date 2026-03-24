/*
 * XREFs of NtGdiEngCreateBitmap @ 0x1C015D510
 * Callers:
 *     <none>
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0082FC8 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C008393C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?ValidUmpdSizl@@YAHUtagSIZE@@_N@Z @ 0x1C015D86C (-ValidUmpdSizl@@YAHUtagSIZE@@_N@Z.c)
 *     Feature_2249667896__private_IsEnabledDeviceUsage @ 0x1C016B1FC (Feature_2249667896__private_IsEnabledDeviceUsage.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0288960 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

HBITMAP __fastcall NtGdiEngCreateBitmap(SIZEL sizl, LONG a2, int a3, int a4, char *Address)
{
  HBITMAP Bitmap; // r15
  ULONG64 v9; // rdx
  unsigned int v10; // rcx^4
  __int64 v11; // r8
  unsigned __int64 v12; // rsi
  ULONG64 v13; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  FLONG v15; // r14d
  __int64 v16; // rax
  __int64 v17; // rdx
  void *v18; // rsi
  __int64 v19; // rax
  _BOOL8 v20; // rcx
  struct _EPROCESS *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  BOOL v25; // [rsp+30h] [rbp-78h]
  _BYTE v26[32]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v27; // [rsp+68h] [rbp-40h]

  Bitmap = 0LL;
  v25 = 1;
  if ( !(unsigned int)ValidUmpdSizl(sizl, 1) )
    return 0LL;
  v12 = v11 * v10;
  if ( v12 > 0xFFFFFFFF )
    return 0LL;
  v13 = gUMPDSecurityLevel;
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
            1163);
        a4 &= ~0x80u;
      }
    }
  }
  if ( Address )
  {
    v15 = a4 & 0xFFFFFFF7;
    if ( (_DWORD)v12 )
    {
      v13 = (ULONG64)&Address[(unsigned int)v12];
      v9 = MmUserProbeAddress;
      if ( v13 > MmUserProbeAddress || v13 < (unsigned __int64)Address )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    if ( (unsigned int)Feature_2249667896__private_IsEnabledDeviceUsage(v13, v9) )
      v16 = GrepSecureVirtualMemory(Address, (unsigned int)v12, 4LL);
    else
      v16 = (__int64)MmSecureVirtualMemory(Address, (unsigned int)v12, 4u);
    v18 = (void *)v16;
    v19 = -v16;
    v20 = v19 != 0;
    v25 = v19 != 0;
  }
  else
  {
    if ( gUMPDSecurityLevel != 2 )
    {
      if ( !gUMPDSecurityLevel
        || (v21 = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v9, v11),
            !(unsigned int)bIsProcessLocalSystem(v21)) )
      {
        if ( (unsigned int)(a3 - 1) > 5 )
        {
          if ( gfUMPDDebug )
            DbgPrint(
              "clientcore\\windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngCreateBitmap:Creating compressed su"
              "rface without input buffer\n",
              1206);
          v25 = 0;
        }
      }
    }
    v15 = a4 | 8;
    v18 = 0LL;
    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 72) )
      v15 |= 0x80u;
  }
  if ( v25 )
    Bitmap = EngCreateBitmap(sizl, a2, a3 | 0x8000u, v15, Address);
  if ( v18 )
  {
    if ( Bitmap )
    {
      SURFREF::SURFREF((SURFREF *)v26, (HSURF)Bitmap);
      if ( v27 )
      {
        *(_QWORD *)(v27 + 144) = v18;
      }
      else
      {
        if ( (unsigned int)Feature_2249667896__private_IsEnabledDeviceUsage(v23, v22) )
          GrepUnsecureVirtualMemory(v18);
        else
          MmUnsecureVirtualMemory(v18);
        EngDeleteSurface((HSURF)Bitmap);
        Bitmap = 0LL;
      }
      SURFREF::~SURFREF((SURFREF *)v26, v22);
    }
    else if ( (unsigned int)Feature_2249667896__private_IsEnabledDeviceUsage(v20, v17) )
    {
      GrepUnsecureVirtualMemory(v18);
    }
    else
    {
      MmUnsecureVirtualMemory(v18);
    }
  }
  return Bitmap;
}
