/*
 * XREFs of NtGdiGetEmbUFI @ 0x1C02AED10
 * Callers:
 *     <none>
 * Callees:
 *     GreGetUFI @ 0x1C014F860 (GreGetUFI.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

__int64 __fastcall NtGdiGetEmbUFI(
        HDC a1,
        _QWORD *a2,
        char *a3,
        _BYTE *a4,
        unsigned __int64 a5,
        ULONG64 a6,
        __int64 *a7)
{
  unsigned int UFI; // esi
  _DWORD *v12; // rcx
  unsigned __int64 *v13; // rbx
  char v14; // dl
  int v15; // r14d
  size_t v16; // r8
  char *v17; // rax
  _BYTE *v18; // rcx
  __int64 v20; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+50h] [rbp-98h] BYREF
  __int64 v23; // [rsp+58h] [rbp-90h] BYREF
  _BYTE Src[80]; // [rsp+60h] [rbp-88h] BYREF

  v22 = 0LL;
  v20 = 0LL;
  memset(Src, 0, 0x48uLL);
  LODWORD(v21) = 0;
  v23 = 0LL;
  UFI = GreGetUFI(a1, &v22, Src, (_DWORD *)&v20 + 1, &v21, (__int64)&v20, &v23);
  if ( UFI )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_QWORD *)MmUserProbeAddress;
    *a2 = v22;
    v12 = (_DWORD *)a6;
    v13 = (unsigned __int64 *)MmUserProbeAddress;
    if ( a6 >= MmUserProbeAddress )
      v12 = (_DWORD *)MmUserProbeAddress;
    v14 = v20;
    *v12 = v20;
    if ( (unsigned __int64)(a7 + 1) > MmUserProbeAddress || a7 + 1 <= a7 )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
      v13 = (unsigned __int64 *)MmUserProbeAddress;
    }
    *a7 = v23;
    if ( (v14 & 2) != 0 && a3 )
    {
      v15 = HIDWORD(v20);
      v16 = HIDWORD(v20);
      v17 = &a3[HIDWORD(v20)];
      if ( (unsigned __int64)v17 > *v13 || v17 <= a3 )
      {
        *(_BYTE *)*v13 = 0;
        v13 = (unsigned __int64 *)MmUserProbeAddress;
      }
      memmove(a3, Src, v16);
      if ( (unsigned __int64)a4 >= *v13 )
        a4 = (_BYTE *)*v13;
      *(_DWORD *)a4 = v15;
      v18 = (_BYTE *)a5;
      if ( a5 >= *v13 )
        v18 = (_BYTE *)*v13;
      *(_DWORD *)v18 = v21;
    }
  }
  return UFI;
}
