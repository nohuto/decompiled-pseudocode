unsigned __int8 *__fastcall XLATEOBJ_pGetXlate555(struct _XLATEOBJ *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  if ( a1 && (a1->flXlate & 7) == 0 )
  {
    if ( (a1[3].flXlate & 0x800) != 0 )
    {
      v2 = *(_QWORD *)&a1[2].iSrcType;
    }
    else
    {
      v2 = *(_QWORD *)&a1[2].iUniq;
      if ( !v2 )
        return (unsigned __int8 *)v1;
    }
    v4 = v2;
    return XEPALOBJ::pGetRGBXlate((XEPALOBJ *)&v4);
  }
  return 0LL;
}
