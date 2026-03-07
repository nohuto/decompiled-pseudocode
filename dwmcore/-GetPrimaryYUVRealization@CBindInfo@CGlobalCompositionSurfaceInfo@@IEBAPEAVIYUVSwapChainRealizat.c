struct IYUVSwapChainRealization *__fastcall CGlobalCompositionSurfaceInfo::CBindInfo::GetPrimaryYUVRealization(
        CGlobalCompositionSurfaceInfo::CBindInfo *this)
{
  __int64 v1; // rdx
  __int64 v2; // rbx
  __int64 v3; // rax
  void (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 9);
  v2 = 0LL;
  v3 = *((_QWORD *)this + 10) - v1;
  v7 = 0LL;
  if ( v3 >> 3 )
  {
    v4 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(_QWORD *)v1
                                                          + 8LL
                                                          + *(int *)(*(_QWORD *)(*(_QWORD *)v1 + 8LL) + 4LL));
    (**v4)(v4, &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6, &v7);
    v2 = v7;
  }
  if ( v2 )
  {
    v5 = v2 + *(int *)(*(_QWORD *)(v2 + 8) + 4LL) + 8LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return (struct IYUVSwapChainRealization *)v2;
}
