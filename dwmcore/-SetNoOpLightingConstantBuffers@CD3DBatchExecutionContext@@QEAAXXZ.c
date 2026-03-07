void __fastcall CD3DBatchExecutionContext::SetNoOpLightingConstantBuffers(CD3DBatchExecutionContext *this)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 4);
  v3 = *((_QWORD *)this + 2);
  v4 = *(_QWORD *)(v1 + 960);
  (*(void (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v3 + 56LL))(v3, 2LL, 1LL, &v4);
  (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**((_QWORD **)this + 2) + 128LL))(
    *((_QWORD *)this + 2),
    1LL,
    1LL,
    &v4);
  *((_BYTE *)this + 80) = 0;
}
