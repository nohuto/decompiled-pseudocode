__int64 __fastcall CmpKeyEnumStackAdvance(__int16 *a1)
{
  __int64 result; // rax
  __int16 v3; // r9
  __int64 *EntryAtLayerHeight; // rax
  __int16 v5; // r9
  __int64 *v6; // r10
  __int64 v7; // rdx
  __int64 v8; // rdx

  for ( result = ((__int64 (*)(void))CmpKeyEnumStackAdvanceInternal)();
        (int)result >= 0;
        result = CmpKeyEnumStackAdvanceInternal(a1) )
  {
    v3 = *a1;
    if ( *a1 >= 0 )
    {
      while ( 1 )
      {
        CmpKeyNodeStackGetEntryAtLayerHeight((__int64)(a1 + 4), v3);
        EntryAtLayerHeight = (__int64 *)CmpKeyEnumStackGetEntryAtLayerHeight(a1);
        v7 = v6[2];
        if ( v7 )
          break;
        v8 = EntryAtLayerHeight[1];
        if ( (!v8 || !(unsigned int)CmpGetEffectiveKeyNodeSemantics(*EntryAtLayerHeight, v8)) && v5 != a1[1] )
        {
          v3 = v5 - 1;
          if ( v3 >= 0 )
            continue;
        }
        goto LABEL_11;
      }
      if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*v6, v7) != 1 )
        return 0LL;
    }
LABEL_11:
    ;
  }
  return result;
}
