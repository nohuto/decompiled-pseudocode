/*
 * XREFs of _lambda_497cdd3be1990e13318bbe793e150545_::operator() @ 0x1801CE178
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_497cdd3be1990e13318bbe793e150545___::Run @ 0x1801CEB70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_497cdd3be1990e13318bbe793e150545___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_497cdd3be1990e13318bbe793e150545_::operator()(_QWORD *a1)
{
  __int64 result; // rax
  unsigned int i; // r14d
  __int64 v4; // rdi
  int (__fastcall *v5)(__int64, _QWORD, GUID *, __int64 *); // rbx
  unsigned int j; // esi
  __int64 v7; // rdi
  int (__fastcall *v8)(__int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 v9; // rbx
  int (__fastcall *v10)(__int64, _QWORD, GUID *, __int64 *); // rdi
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v13; // [rsp+80h] [rbp+38h] BYREF
  unsigned int v14; // [rsp+88h] [rbp+40h] BYREF
  __int64 v15; // [rsp+90h] [rbp+48h] BYREF
  __int64 v16; // [rsp+98h] [rbp+50h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)a1[1] + 24LL))(a1[1], &v14);
  for ( i = 0; i < v14; ++i )
  {
    v11 = 0LL;
    v4 = a1[1];
    v5 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v4 + 32LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    if ( v5(v4, i, &GUID_e23730be_13f1_4f0b_88ab_76d5e3beb5b7, &v11) >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*a1 + 24LL))(*a1, &v13);
      for ( j = 0; j < v13; ++j )
      {
        v15 = 0LL;
        v7 = *a1;
        v8 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)*a1 + 32LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
        if ( v8(v7, j, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v15) >= 0 )
        {
          v16 = 0LL;
          v9 = v15;
          v10 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v15 + 24LL);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
          if ( v10(v9, 0LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v16) >= 0 )
          {
            (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 32LL))(v16, &v12);
            (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v11 + 24LL))(
              v11,
              v15,
              *((unsigned int *)a1 + 4),
              v12);
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
      }
    }
    result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  }
  return result;
}
