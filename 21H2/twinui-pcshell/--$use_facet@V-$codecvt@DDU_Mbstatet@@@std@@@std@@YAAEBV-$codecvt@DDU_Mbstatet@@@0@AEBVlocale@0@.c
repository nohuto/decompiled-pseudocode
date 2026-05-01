/*
 * XREFs of ??$use_facet@V?$codecvt@DDU_Mbstatet@@@std@@@std@@YAAEBV?$codecvt@DDU_Mbstatet@@@0@AEBVlocale@0@@Z @ 0x18011A07C
 * Callers:
 *     ?imbue@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAAXAEBVlocale@2@@Z @ 0x1801283D0 (-imbue@-$basic_filebuf@DU-$char_traits@D@std@@@std@@MEAAXAEBVlocale@2@@Z.c)
 *     ?open@?$basic_filebuf@DU?$char_traits@D@std@@@std@@QEAAPEAV12@PEBGHH@Z @ 0x18012883C (-open@-$basic_filebuf@DU-$char_traits@D@std@@@std@@QEAAPEAV12@PEBGHH@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800904EC (--2@YAPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180090984 (_CxxThrowException_0.c)
 *     ??0bad_cast@std@@QEAA@XZ @ 0x18011AA78 (--0bad_cast@std@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::use_facet<std::codecvt<char,char,_Mbstatet>>(__int64 a1)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rbx
  _QWORD *v7; // rax
  _BYTE pExceptionObject[56]; // [rsp+20h] [rbp-38h] BYREF
  char v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF
  _QWORD *v12; // [rsp+70h] [rbp+18h]

  std::_Lockit::_Lockit((std::_Lockit *)&v10, 0);
  v11 = std::_Facetptr<std::codecvt<char,char,_Mbstatet>>::_Psave;
  v2 = std::locale::id::operator unsigned __int64(std::codecvt<char,char,_Mbstatet>::id);
  v3 = *(_QWORD *)(a1 + 8);
  if ( v2 >= *(_QWORD *)(v3 + 24) )
    v4 = 0LL;
  else
    v4 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 8 * v2);
  if ( !v4 )
  {
    if ( *(_BYTE *)(v3 + 36) )
    {
      v5 = std::locale::_Getgloballocale();
      if ( v2 >= *(_QWORD *)(v5 + 24) )
        v4 = 0LL;
      else
        v4 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 8 * v2);
    }
    if ( !v4 )
    {
      v4 = v11;
      if ( !v11 )
      {
        if ( std::codecvt<char,char,_Mbstatet>::_Getcat(&v11, a1) == -1 )
        {
          std::bad_cast::bad_cast((std::bad_cast *)pExceptionObject);
          throw (std::bad_cast *)pExceptionObject;
        }
        v6 = v11;
        v12 = (_QWORD *)v11;
        v7 = operator new(0x10uLL);
        v12 = v7;
        *v7 = qword_18064FB58;
        v7[1] = v6;
        qword_18064FB58 = v7;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
        v4 = v11;
        std::_Facetptr<std::codecvt<char,char,_Mbstatet>>::_Psave = v11;
      }
    }
  }
  std::_Lockit::~_Lockit((std::_Lockit *)&v10);
  return v4;
}
