/*
 * XREFs of NtGdiEngCreateBitmap @ 0x1C02CB8F0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ?UmpdSecurityGateNoUmpdObj@@YA_NXZ @ 0x1C0279028 (-UmpdSecurityGateNoUmpdObj@@YA_NXZ.c)
 *     ?ValidUmpdSizl@@YAHUtagSIZE@@_N@Z @ 0x1C02C9DE0 (-ValidUmpdSizl@@YAHUtagSIZE@@_N@Z.c)
 */

HBITMAP __fastcall NtGdiEngCreateBitmap(SIZEL sizl, LONG a2, int a3, int a4, char *Address)
{
  HBITMAP Bitmap; // r15
  Gre::Base *v9; // rcx
  __int64 v10; // r8
  unsigned __int64 v11; // r14
  Gre::Base *v12; // rcx
  FLONG v13; // esi
  char *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rbx
  BOOL v19; // [rsp+30h] [rbp-58h]
  HANDLE SecureHandle; // [rsp+38h] [rbp-50h]

  Bitmap = 0LL;
  SecureHandle = 0LL;
  v19 = 1;
  if ( !ValidUmpdSizl(sizl, 1) )
    return 0LL;
  v11 = v10 * HIDWORD(v9);
  if ( v11 > 0xFFFFFFFF )
    return 0LL;
  if ( UmpdSecurityGateNoUmpdObj(v9) && (a4 & 0x80u) != 0 )
    a4 &= ~0x80u;
  if ( Address )
  {
    v13 = a4 & 0xFFFFFFF7;
    if ( (_DWORD)v11 )
    {
      v14 = &Address[(unsigned int)v11];
      if ( (unsigned __int64)v14 > MmUserProbeAddress || v14 < Address )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    SecureHandle = MmSecureVirtualMemory(Address, (unsigned int)v11, 4u);
    v19 = SecureHandle != 0LL;
  }
  else
  {
    if ( UmpdSecurityGateNoUmpdObj(v12) && a3 != 1 && a3 != 2 && a3 != 3 && a3 != 4 && (unsigned int)(a3 - 5) >= 2 )
      v19 = 0;
    v13 = a4 | 8;
    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 72) )
      v13 |= 0x80u;
  }
  if ( v19 )
    Bitmap = EngCreateBitmap(sizl, a2, a3 | 0x8000u, v13, Address);
  if ( SecureHandle )
  {
    if ( Bitmap )
    {
      LOBYTE(v15) = 5;
      v16 = HmgShareLockCheck(Bitmap, v15);
      v17 = v16;
      if ( v16 )
      {
        *(_QWORD *)(v16 + 144) = SecureHandle;
      }
      else
      {
        MmUnsecureVirtualMemory(SecureHandle);
        EngDeleteSurface((HSURF)Bitmap);
        Bitmap = 0LL;
      }
      if ( v17 )
        DEC_SHARE_REF_CNT(v17);
    }
    else
    {
      MmUnsecureVirtualMemory(SecureHandle);
    }
  }
  return Bitmap;
}
