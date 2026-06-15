/*
 * XREFs of sub_1800EEE5C @ 0x1800EEE5C
 * Callers:
 *     sub_1800EF44C @ 0x1800EF44C (sub_1800EF44C.c)
 * Callees:
 *     sub_1800EECE4 @ 0x1800EECE4 (sub_1800EECE4.c)
 *     sub_1800EF068 @ 0x1800EF068 (sub_1800EF068.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800EF4E8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAXU_Mutex_count.c)
 */

__int64 *__fastcall sub_1800EEE5C(__int64 *a1, __int64 *a2, __int64 *a3, unsigned int *a4, __int64 a5)
{
  __int64 *v7; // r11
  __int64 **v8; // rdi
  __int64 *result; // rax
  __int64 *v10; // r9
  unsigned int v11; // esi
  bool v12; // cf
  __int64 *v13; // r9
  __int64 *v14; // rax
  __int64 *v15; // rax
  __int64 *v16; // rcx
  __int64 *v17; // rdx
  _QWORD *v18; // r10
  int v19; // [rsp+20h] [rbp-28h]
  char v20; // [rsp+30h] [rbp-18h] BYREF
  __int64 *v21; // [rsp+50h] [rbp+8h] BYREF

  v7 = a1;
  v8 = (__int64 **)*a1;
  if ( a1[1] )
  {
    if ( a3 == *v8 )
    {
      if ( *a4 < *((_DWORD *)a3 + 7) )
      {
        sub_1800EECE4(a1, a2, 1, a3, v19, a5);
        return a2;
      }
      goto LABEL_32;
    }
    if ( a3 == (__int64 *)v8 )
    {
      v10 = v8[2];
      if ( *((_DWORD *)v10 + 7) < *a4 )
      {
        sub_1800EECE4(a1, a2, 0, v10, v19, a5);
        return a2;
      }
      goto LABEL_32;
    }
    v11 = *a4;
    v12 = *((_DWORD *)a3 + 7) < *a4;
    if ( *((_DWORD *)a3 + 7) > *a4 )
    {
      v13 = a3;
      if ( *((_BYTE *)a3 + 25) )
      {
        v13 = (__int64 *)a3[2];
      }
      else
      {
        v14 = (__int64 *)*a3;
        if ( *(_BYTE *)(*a3 + 25) )
        {
          v15 = (__int64 *)a3[1];
          if ( !*((_BYTE *)v15 + 25) )
          {
            v16 = a3;
            do
            {
              v17 = v15;
              if ( v16 != (__int64 *)*v15 )
                break;
              v13 = v15;
              v15 = (__int64 *)v15[1];
              v16 = v17;
            }
            while ( !*((_BYTE *)v15 + 25) );
          }
          if ( !*((_BYTE *)v13 + 25) )
            v13 = v15;
        }
        else
        {
          do
          {
            v13 = v14;
            v14 = (__int64 *)v14[2];
          }
          while ( !*((_BYTE *)v14 + 25) );
        }
      }
      if ( *((_DWORD *)v13 + 7) < v11 )
      {
        if ( *(_BYTE *)(v13[2] + 25) )
          sub_1800EECE4(v7, a2, 0, v13, v19, a5);
        else
          sub_1800EECE4(v7, a2, 1, a3, v19, a5);
        return a2;
      }
      v12 = *((_DWORD *)a3 + 7) < v11;
    }
    if ( !v12
      || (v21 = a3,
          std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>,std::_Iterator_base0>::operator++(&v21),
          v21 != (__int64 *)v8)
      && v11 >= *((_DWORD *)v21 + 7) )
    {
LABEL_32:
      *a2 = *(_QWORD *)sub_1800EF068((_DWORD)v7, (unsigned int)&v20, (_DWORD)a3, (_DWORD)a4, a5);
      return a2;
    }
    if ( *(_BYTE *)(v18[2] + 25LL) )
      sub_1800EECE4(v7, a2, 0, v18, v19, a5);
    else
      sub_1800EECE4(v7, a2, 1, v21, v19, a5);
    return a2;
  }
  else
  {
    try
    {
      sub_1800EECE4(a1, a2, 1, v8, v19, a5);
      result = a2;
    }
    catch ( ... )
    {
      sub_1800472E0(a5, 0x30uLL);
      throw;
    }
  }
  return result;
}
