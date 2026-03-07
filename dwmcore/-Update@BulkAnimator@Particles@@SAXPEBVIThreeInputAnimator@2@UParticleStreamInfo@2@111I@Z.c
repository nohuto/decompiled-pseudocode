__int64 *__fastcall Particles::BulkAnimator::Update(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        unsigned int a6)
{
  unsigned int v10; // ebx
  unsigned int v11; // eax
  __int64 v12; // r13
  unsigned int v13; // r15d
  __int64 v14; // rdi
  __int64 *result; // rax
  __int64 v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rbx
  gsl::details *v19; // rcx
  unsigned __int64 v20; // rbx
  __int64 v21; // rbx
  unsigned int v22; // [rsp+30h] [rbp-50h]
  _QWORD v23[2]; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v24[2]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v25[2]; // [rsp+58h] [rbp-28h] BYREF
  _QWORD v26[3]; // [rsp+68h] [rbp-18h] BYREF

  v10 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1) >> 2;
  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  v12 = *a3;
  v13 = 0;
  v14 = *a4;
  v22 = v11;
  result = a5;
  v16 = *a5;
  if ( a6 )
  {
    v17 = v10;
    while ( 1 )
    {
      v18 = v16 + 4LL * *((unsigned int *)result + 2);
      gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v23, v17);
      v23[1] = v18;
      if ( v23[0] == -1LL || !v18 && v23[0] )
        goto LABEL_17;
      v20 = *(_QWORD *)a2 + 4 * (*(unsigned int *)(a2 + 8) + (unsigned __int64)(*(_DWORD *)(a2 + 12) * v13));
      gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v26, v22);
      v26[1] = v20;
      if ( v26[0] == -1LL || !v20 && v26[0] )
        goto LABEL_17;
      if ( (v21 = v12 + 4LL * *((unsigned int *)a3 + 2),
            gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v25, v17),
            v25[1] = v21,
            v25[0] == -1LL)
        || !v21 && v25[0]
        || (gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v24, *((unsigned int *)a4 + 3)),
            v24[1] = v14,
            v24[0] == -1LL)
        || !v14 && v24[0] )
      {
LABEL_17:
        gsl::details::terminate(v19);
        __debugbreak();
      }
      (*(void (__fastcall **)(__int64, _QWORD *, _QWORD *, _QWORD *, _QWORD *))(*(_QWORD *)a1 + 8LL))(
        a1,
        v26,
        v25,
        v24,
        v23);
      ++v13;
      v16 += 4LL * *((unsigned int *)a5 + 3);
      v12 += 4LL * *((unsigned int *)a3 + 3);
      result = (__int64 *)*((unsigned int *)a4 + 3);
      v14 += 4LL * (_QWORD)result;
      if ( v13 >= a6 )
        break;
      result = a5;
    }
  }
  return result;
}
