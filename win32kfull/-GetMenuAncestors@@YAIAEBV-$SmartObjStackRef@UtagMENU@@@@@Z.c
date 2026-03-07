__int64 __fastcall GetMenuAncestors(__int64 a1)
{
  unsigned int v1; // edi
  _QWORD *v2; // rsi
  unsigned int MenuAncestors; // ebx
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  v2 = *(_QWORD **)(**(_QWORD **)a1 + 104LL);
  while ( v2 )
  {
    SmartObjStackRefBase<tagMENU>::Init(v5, v2[1]);
    v5[2] = 0LL;
    MenuAncestors = GetMenuAncestors(v5);
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v5);
    v2 = (_QWORD *)*v2;
    if ( MenuAncestors > v1 )
      v1 = MenuAncestors;
  }
  return v1 + 1;
}
