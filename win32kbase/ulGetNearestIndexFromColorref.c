unsigned int __fastcall ulGetNearestIndexFromColorref(_DWORD *a1, __int64 a2, tagPALETTEENTRY a3, unsigned int a4)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  unsigned int v8; // r8d
  tagPALETTEENTRY NearestFromPalentry; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // [rsp+20h] [rbp-10h] BYREF
  _DWORD *v14; // [rsp+50h] [rbp+20h] BYREF
  __int64 v15; // [rsp+58h] [rbp+28h] BYREF
  tagPALETTEENTRY v16; // [rsp+60h] [rbp+30h]

  v15 = a2;
  v14 = a1;
  v6 = SGDGetSessionState(a1);
  v16 = a3;
  v7 = *(_QWORD *)(v6 + 24);
  if ( !v14 || (v14[6] & 0x800) != 0 )
  {
    if ( (*(_DWORD *)&a3 & 0x3000000) != 0 )
    {
      if ( !v15 )
        return 0;
      v16.peFlags = 0;
      if ( (*(_DWORD *)&a3 & 0x1000000) != 0 )
      {
        NearestFromPalentry = v16;
        if ( *(unsigned int *)&v16 >= *(_DWORD *)(v15 + 28) )
          NearestFromPalentry = 0;
      }
      else
      {
        NearestFromPalentry = (tagPALETTEENTRY)XEPALOBJ::ulGetNearestFromPalentry((XEPALOBJ *)&v15, v16, a4);
      }
      if ( XEPALOBJ::bIsPalDefault((XEPALOBJ *)&v15) )
        goto LABEL_33;
      if ( !v14 )
        goto LABEL_38;
      v11 = *(_QWORD *)(v15 + 80);
      if ( v11 )
        return *(unsigned __int8 *)(*(unsigned int *)&NearestFromPalentry + v11 + 4);
      if ( !v14 )
      {
LABEL_38:
        v12 = *(_QWORD *)(v15 + 72);
        if ( v12 )
          return *(unsigned __int8 *)(*(unsigned int *)&NearestFromPalentry + v12 + 4);
      }
      a3 = *(tagPALETTEENTRY *)(*(_QWORD *)(v15 + 112) + 4LL * *(unsigned int *)&NearestFromPalentry);
      v16 = a3;
      if ( a3.peFlags == 2 )
        return a3.peRed;
    }
    if ( (*(_DWORD *)&a3 & 0x10FF0000) == 0x10FF0000 )
      return a3.peRed;
    v16.peFlags = 0;
    NearestFromPalentry = v16;
    if ( v16 == 0xFFFFFF )
    {
      NearestFromPalentry = (tagPALETTEENTRY)19;
      goto LABEL_34;
    }
    if ( v16 )
    {
      v13 = *(_QWORD *)(v7 + 6000);
      NearestFromPalentry = (tagPALETTEENTRY)XEPALOBJ::ulGetNearestFromPalentry((XEPALOBJ *)&v13, v16, a4);
    }
LABEL_33:
    if ( *(unsigned int *)&NearestFromPalentry < 0xA )
      return (unsigned int)NearestFromPalentry;
LABEL_34:
    *(_DWORD *)&NearestFromPalentry += 236;
    return (unsigned int)NearestFromPalentry;
  }
  if ( (*(_DWORD *)&a3 & 0x1000000) == 0 )
  {
    if ( (*(_DWORD *)&a3 & 0x10FF0000) == 0x10FF0000 )
      return (unsigned int)a3.peRed < v14[7] ? a3.peRed : 0;
    v16.peFlags = 0;
    v8 = (unsigned int)v16;
    goto LABEL_6;
  }
  if ( !v15 )
    return 0;
  v8 = *(_DWORD *)(*(_QWORD *)(v15 + 112)
                 + 4LL
                 * (*(unsigned __int16 *)&a3.peRed & (unsigned int)-((unsigned int)*(unsigned __int16 *)&a3.peRed < *(_DWORD *)(v15 + 28))));
LABEL_6:
  if ( a4 )
    return XEPALOBJ::ulDispatchGFPEFunction((ULONG_PTR *)&v14, v14[24], v8);
  else
    return XEPALOBJ::ulGetNearestFromPalentryNoExactMatchFirst((XEPALOBJ *)&v14, (struct tagPALETTEENTRY)v8);
}
