/*
 * XREFs of NtGdiGetUFI @ 0x1C014F710
 * Callers:
 *     <none>
 * Callees:
 *     GreGetUFI @ 0x1C014F860 (GreGetUFI.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

__int64 __fastcall NtGdiGetUFI(HDC a1, _QWORD *a2, void *a3, _DWORD *a4, unsigned __int64 a5, ULONG64 a6)
{
  unsigned int UFI; // ebx
  _DWORD *v11; // rcx
  _DWORD **v12; // rsi
  char v13; // al
  int v14; // r14d
  size_t v15; // r8
  ULONG64 v16; // rax
  _DWORD *v17; // rcx
  __int64 v19; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+50h] [rbp-98h]
  _BYTE Src[80]; // [rsp+60h] [rbp-88h] BYREF

  v21 = 0LL;
  v19 = 0LL;
  memset(Src, 0, 0x48uLL);
  LODWORD(v20) = 0;
  UFI = GreGetUFI(a1, (__int64)&v20, (__int64)&v19, 0LL);
  if ( UFI )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_QWORD *)MmUserProbeAddress;
    *a2 = v21;
    v11 = (_DWORD *)a6;
    v12 = (_DWORD **)MmUserProbeAddress;
    if ( a6 >= MmUserProbeAddress )
      v11 = (_DWORD *)MmUserProbeAddress;
    v13 = v19;
    *v11 = v19;
    if ( (v13 & 2) != 0 && a3 )
    {
      v14 = HIDWORD(v19);
      v15 = HIDWORD(v19);
      v16 = (ULONG64)a3 + HIDWORD(v19);
      if ( v16 > MmUserProbeAddress || v16 <= (unsigned __int64)a3 )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
        v12 = (_DWORD **)MmUserProbeAddress;
      }
      memmove(a3, Src, v15);
      if ( a4 >= *v12 )
        a4 = *v12;
      *a4 = v14;
      v17 = (_DWORD *)a5;
      if ( a5 >= (unsigned __int64)*v12 )
        v17 = *v12;
      *v17 = v20;
    }
  }
  return UFI;
}
