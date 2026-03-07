__int64 __fastcall NtGdiGetFontResourceInfoInternalW(
        unsigned __int16 *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        ULONG64 a5,
        void *a6,
        int a7)
{
  unsigned __int16 *v10; // rdi
  unsigned int FontResourceInfoInternalW; // esi
  unsigned int *v12; // rbx
  ULONG64 v13; // rdx
  __int64 v14; // r8
  _DWORD *v15; // rcx
  ULONG64 v16; // rax
  __int64 v18; // [rsp+70h] [rbp-168h] BYREF
  unsigned __int16 *v19; // [rsp+78h] [rbp-160h]
  void *v20; // [rsp+80h] [rbp-158h]
  _BYTE v21[96]; // [rsp+90h] [rbp-148h] BYREF
  unsigned __int16 v22[80]; // [rsp+F0h] [rbp-E8h] BYREF

  v19 = a1;
  v20 = a6;
  v10 = 0LL;
  FontResourceInfoInternalW = 0;
  v18 = 0LL;
  v12 = 0LL;
  memset_0(v21, 0, 0x5CuLL);
  if ( a2 > 1 )
  {
    if ( a2 > 0x50 )
    {
      if ( a2 <= 0x1388000 )
        v10 = (unsigned __int16 *)AllocFreeTmpBuffer(2 * a2);
    }
    else
    {
      v10 = v22;
    }
    if ( v10 )
      FontResourceInfoInternalW = bCheckAndCapThePath(v10, v19, a2, a3);
  }
  if ( a4 <= 0x5C )
  {
    v12 = (unsigned int *)v21;
  }
  else if ( a4 > 0x2710000 || (v12 = (unsigned int *)Win32AllocPoolZInit(a4, 1886221383LL)) == 0LL )
  {
    FontResourceInfoInternalW = 0;
  }
  if ( FontResourceInfoInternalW )
  {
    FontResourceInfoInternalW = GetFontResourceInfoInternalW(v10, a2, a3, a4, (__int64)&v18, v12, a7);
    if ( FontResourceInfoInternalW )
    {
      v15 = (_DWORD *)a5;
      v13 = MmUserProbeAddress;
      if ( a5 >= MmUserProbeAddress )
        v15 = (_DWORD *)MmUserProbeAddress;
      *v15 = v18;
      if ( a4 )
      {
        v16 = (ULONG64)a6 + a4;
        if ( v16 > MmUserProbeAddress || v16 <= (unsigned __int64)a6 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a6, v12, a4);
      }
    }
  }
  if ( v10 && v10 != v22 )
    FreeTmpBuffer(v10, v13, v14);
  if ( v12 && v12 != (unsigned int *)v21 )
    Win32FreePool(v12);
  return FontResourceInfoInternalW;
}
