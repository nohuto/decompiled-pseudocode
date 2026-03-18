/*
 * XREFs of NtGdiGetTextExtentExW @ 0x1C0034270
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     GreGetTextExtentExW @ 0x1C015FAA8 (GreGetTextExtentExW.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall NtGdiGetTextExtentExW(
        HDC a1,
        const void *a2,
        unsigned int a3,
        int a4,
        _DWORD *a5,
        char *a6,
        struct tagSIZE *a7,
        int a8)
{
  __int64 v8; // rdi
  HDC v10; // r10
  unsigned int v11; // r13d
  unsigned __int16 *v12; // rcx
  _BYTE *v13; // r14
  int v14; // r15d
  unsigned int TextExtent; // ebx
  unsigned __int16 *v16; // r9
  ULONG64 v17; // rax
  struct tagSIZE *v18; // r12
  int *v19; // r8
  _DWORD *v20; // rdx
  size_t v21; // r8
  __int64 v23; // [rsp+48h] [rbp-110h] BYREF
  _BYTE *v24; // [rsp+50h] [rbp-108h]
  int v25; // [rsp+58h] [rbp-100h]
  unsigned int v26; // [rsp+60h] [rbp-F8h]
  int v27; // [rsp+68h] [rbp-F0h]
  unsigned __int16 *v28; // [rsp+70h] [rbp-E8h]
  struct tagSIZE *v29; // [rsp+78h] [rbp-E0h]
  unsigned __int16 *v30; // [rsp+80h] [rbp-D8h]
  struct tagSIZE v31; // [rsp+88h] [rbp-D0h] BYREF
  HDC v32; // [rsp+90h] [rbp-C8h]
  char *v33; // [rsp+98h] [rbp-C0h]
  struct tagSIZE *v34; // [rsp+A0h] [rbp-B8h]
  HDC v35; // [rsp+A8h] [rbp-B0h]
  _BYTE Src[64]; // [rsp+B0h] [rbp-A8h] BYREF
  _BYTE v37[32]; // [rsp+F0h] [rbp-68h] BYREF

  v25 = a4;
  v8 = a3;
  v10 = a1;
  v32 = a1;
  v27 = a4;
  v35 = a1;
  v26 = a3;
  v33 = a6;
  v29 = a7;
  v34 = a7;
  v31 = 0LL;
  v11 = 0;
  LODWORD(v23) = 0;
  v12 = 0LL;
  v28 = 0LL;
  v13 = 0LL;
  v24 = 0LL;
  v14 = 0;
  TextExtent = 0;
  if ( !a7 )
    return TextExtent;
  if ( a3 )
  {
    LOBYTE(v14) = a3 <= 0x10;
    if ( a2 )
    {
      if ( a3 > 0x10 )
      {
        if ( a3 <= 0x682AAA )
        {
          v13 = (_BYTE *)AllocFreeTmpBuffer(6 * a3);
          v24 = v13;
        }
        v16 = (unsigned __int16 *)&v13[4 * v8];
        v28 = v16;
      }
      else
      {
        v16 = (unsigned __int16 *)v37;
        v28 = (unsigned __int16 *)v37;
        v13 = Src;
        v24 = Src;
      }
      v30 = v16;
      if ( v13 )
      {
        v17 = (ULONG64)a2 + 2 * v8;
        if ( v17 < (unsigned __int64)a2 || v17 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v16, a2, 2 * v8);
        TextExtent = 1;
      }
      v12 = v30;
      v18 = v29;
      v10 = v32;
    }
    else
    {
      v18 = a7;
    }
    if ( TextExtent )
    {
      v19 = 0LL;
      if ( a6 )
        v19 = (int *)v13;
      TextExtent = GreGetTextExtentExW(v10, v12, v8, (__int64)&v23, v19, &v31, a8);
      v11 = v23;
    }
    v20 = a5;
    if ( !TextExtent )
      goto LABEL_35;
  }
  else
  {
    TextExtent = 1;
    v20 = a5;
    v18 = a7;
  }
  if ( v11 > (unsigned int)v8 )
  {
    TextExtent = 0;
  }
  else
  {
    if ( (unsigned __int64)v18 >= MmUserProbeAddress )
      v18 = (struct tagSIZE *)MmUserProbeAddress;
    *v18 = v31;
    if ( v20 )
    {
      if ( (unsigned __int64)v20 >= MmUserProbeAddress )
        v20 = (_DWORD *)MmUserProbeAddress;
      *v20 = v11;
    }
    if ( v11 && a6 && v13 )
    {
      v21 = 4LL * v11;
      if ( (unsigned __int64)&a6[v21] > MmUserProbeAddress || &a6[v21] <= a6 || ((unsigned __int8)a6 & 3) != 0 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(a6, v13, v21);
    }
  }
LABEL_35:
  if ( !v14 && v13 )
    FreeTmpBuffer(v13);
  return TextExtent;
}
