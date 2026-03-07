void __fastcall std::vector<CSceneNode *>::_Insert_range<CSceneNode * *>(
        _QWORD *a1,
        _BYTE *a2,
        const void *a3,
        __int64 a4)
{
  _BYTE *v4; // r13
  _BYTE *v5; // rdi
  size_t v6; // r12
  unsigned __int64 v8; // rsi
  __int64 v10; // rcx
  SIZE_T size_of; // rax
  char *v12; // r15
  size_t v13; // r8
  const void *v14; // rdx
  char *v15; // rcx
  __int64 v16; // r15
  size_t v17; // r8
  unsigned __int64 v18; // rbp
  char *v19; // rdi
  unsigned __int64 v20; // [rsp+20h] [rbp-58h]
  __int64 v21; // [rsp+88h] [rbp+10h]
  unsigned __int64 v23; // [rsp+98h] [rbp+20h]

  v4 = (_BYTE *)*a1;
  v5 = (_BYTE *)a1[1];
  v6 = a4 - (_QWORD)a3;
  v8 = (a4 - (__int64)a3) >> 3;
  if ( v8 )
  {
    if ( v8 <= (__int64)(a1[2] - (_QWORD)v5) >> 3 )
    {
      v16 = 8 * v8;
      v17 = v5 - a2;
      v18 = (v5 - a2) >> 3;
      if ( v8 >= v18 )
      {
        v19 = &a2[v16];
        memmove_0(&a2[v16], a2, v17);
        a1[1] = &v19[8 * v18];
      }
      else
      {
        memmove_0(v5, &v5[-v16], 8 * v8);
        a1[1] = &v5[v16];
        memmove_0(&a2[8 * v8], a2, (size_t)&v5[-8LL * v8 - (_QWORD)a2]);
      }
      memmove_0(a2, a3, v6);
    }
    else
    {
      v10 = (v5 - v4) >> 3;
      if ( v8 > 0x1FFFFFFFFFFFFFFFLL - v10 )
        std::_Xlength_error("vector too long");
      v20 = v10 + v8;
      v23 = std::vector<CMilPoint2F>::_Calculate_growth(a1, v10 + v8);
      size_of = std::_Get_size_of_n<8>(v23);
      v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      v21 = (a2 - v4) >> 3;
      memmove_0(&v12[8 * v21], a3, v6);
      if ( v8 == 1 && a2 == v5 )
      {
        v13 = v5 - v4;
        v14 = v4;
        v15 = v12;
      }
      else
      {
        memmove_0(v12, v4, a2 - v4);
        v13 = v5 - a2;
        v14 = a2;
        v15 = &v12[8 * v8 + 8 * v21];
      }
      memmove_0(v15, v14, v13);
      std::vector<CSceneNode *>::_Change_array(a1, v12, v20, v23);
    }
  }
}
