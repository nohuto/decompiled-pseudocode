/*
 * XREFs of ?bGetMorePoints@XCLIPOBJ@@IEAAHPEAVEPATHOBJ@@PEAK@Z @ 0x1C02DB20C
 * Callers:
 *     ?bGetLine@XCLIPOBJ@@IEAAHPEAVEPATHOBJ@@PEBK@Z @ 0x1C02DB0F4 (-bGetLine@XCLIPOBJ@@IEAAHPEAVEPATHOBJ@@PEBK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XCLIPOBJ::bGetMorePoints(XCLIPOBJ *this, struct EPATHOBJ *a2, unsigned int *a3)
{
  __int64 v3; // r9
  int v7; // eax
  __int64 result; // rax
  __int64 v9; // rdx
  struct _PATHDATA v10; // [rsp+20h] [rbp-10h] BYREF

  v3 = *((_QWORD *)this + 18);
  v7 = *(_DWORD *)(v3 + 24);
  if ( (v7 & 0x200000) != 0 )
  {
    *(_DWORD *)(v3 + 24) = v7 | 0x2000000;
    return 0LL;
  }
  if ( *(_DWORD *)v3 == 1 )
    *(_QWORD *)(v3 + 4) = **(_QWORD **)(v3 + 16);
  v10 = 0LL;
  if ( !EPATHOBJ::bEnum(a2, &v10) )
  {
    *(_DWORD *)(*((_QWORD *)this + 18) + 24LL) |= 0x200000u;
    if ( !v10.count )
    {
LABEL_8:
      *(_DWORD *)(*((_QWORD *)this + 18) + 24LL) |= 0x2000000u;
      return 0LL;
    }
  }
  v9 = *((_QWORD *)this + 18);
  if ( (v10.flags & 1) != 0 )
  {
    *(POINTFIX *)(v9 + 204) = *v10.pptfx;
    *(POINTFIX *)(*((_QWORD *)this + 18) + 4LL) = *v10.pptfx;
    if ( v10.count == 1 )
    {
      if ( !EPATHOBJ::bEnum(a2, &v10) )
      {
        *(_DWORD *)(*((_QWORD *)this + 18) + 24LL) |= 0x200000u;
        if ( !v10.count )
          goto LABEL_8;
      }
      *(_QWORD *)(*((_QWORD *)this + 18) + 16LL) = v10.pptfx;
      **((_DWORD **)this + 18) = v10.count;
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 18) + 16LL) = v10.pptfx + 1;
      **((_DWORD **)this + 18) = v10.count - 1;
    }
  }
  else
  {
    *(_QWORD *)(v9 + 16) = v10.pptfx;
    **((_DWORD **)this + 18) = v10.count;
  }
  result = 1LL;
  *a3 = v10.flags;
  return result;
}
