/*
 * XREFs of ?_InsertNode@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@2@@2@PEAU?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@0_K@Z @ 0x180013D00
 * Callers:
 *     ?_EmplaceImpl@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@2@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@2@@2@PEAU?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@@Z @ 0x180013AC0 (-_EmplaceImpl@-$_HashTable@_KU-$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U-$hash@_K@2@U-$equ.c)
 * Callees:
 *     ?_Rehash@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEAA_NE@Z @ 0x180013D98 (-_Rehash@-$_HashTable@_KU-$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U-$hash@_K@2@U-$equal_to.c)
 */

_QWORD *__fastcall utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ResourceSetClientProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ResourceSetClientProxy *>>,0>::_InsertNode(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5)
{
  __int64 v5; // r11
  _QWORD *v7; // r10
  _QWORD *v8; // rax
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rax

  v5 = a1;
  v7 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 16 * (a5 & ((8LL << *(_BYTE *)(a1 + 32)) - 1)));
  if ( !a3 )
  {
    *v7 = a4;
    a3 = a1;
LABEL_6:
    v7[1] = a4;
    goto LABEL_7;
  }
  if ( *v7 == a3 )
  {
    *v7 = a4;
    goto LABEL_7;
  }
  if ( *(_QWORD *)v7[1] == a3 )
    goto LABEL_6;
LABEL_7:
  v8 = *(_QWORD **)(a3 + 8);
  *a4 = a3;
  a4[1] = v8;
  *a2 = a4;
  *v8 = a4;
  *(_QWORD *)(a3 + 8) = a4;
  LOBYTE(a1) = *(_BYTE *)(a1 + 32);
  v9 = *(_QWORD *)(v5 + 24) + 1LL;
  v10 = *(unsigned __int8 *)(v5 + 33);
  *(_QWORD *)(v5 + 24) = v9;
  if ( v10 < v9 >> a1 )
    utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ResourceSetClientProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ResourceSetClientProxy *>>,0>::_Rehash(
      v5,
      (unsigned int)(a1 + 1));
  return a2;
}
