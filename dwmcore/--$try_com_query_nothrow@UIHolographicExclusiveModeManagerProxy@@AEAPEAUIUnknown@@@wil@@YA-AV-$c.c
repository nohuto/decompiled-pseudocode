_QWORD *__fastcall wil::try_com_query_nothrow<IHolographicExclusiveModeManagerProxy,IUnknown * &>(
        _QWORD *a1,
        void (__fastcall ****a2)(_QWORD, GUID *, _QWORD *))
{
  void (__fastcall ***v3)(_QWORD, GUID *, _QWORD *); // rcx

  v3 = *a2;
  *a1 = 0LL;
  (**v3)(v3, &GUID_143f61ed_01bd_4237_b4cb_c9ce1a59f0a0, a1);
  return a1;
}
