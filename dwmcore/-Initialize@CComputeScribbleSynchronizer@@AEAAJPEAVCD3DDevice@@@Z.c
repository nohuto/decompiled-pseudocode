__int64 __fastcall CComputeScribbleSynchronizer::Initialize(
        CComputeScribbleSynchronizer *this,
        struct CD3DDevice *a2,
        unsigned __int64 a3)
{
  struct CSharedFence **v3; // rbx
  __int64 v5; // rcx
  signed int SharedFence; // ebx
  unsigned __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  wil::details *v13; // rcx
  wil::details *Event; // rbx
  __int64 v15; // r8
  const char *v16; // r9
  int v17[2]; // [rsp+20h] [rbp-18h] BYREF
  int v18; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (struct CSharedFence **)((char *)this + 8);
  v5 = *((_QWORD *)this + 1);
  *v3 = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v18 = 21;
  *(_QWORD *)v17 = "ComputeScribbleFrom11";
  SharedFence = CD3DDevice::CreateSharedFence(a2, (const struct CResourceTag *)v17, a3, v3);
  if ( SharedFence < 0 )
  {
    v9 = 27LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblesynchronizer.cpp",
      (const char *)(unsigned int)SharedFence);
    return (unsigned int)SharedFence;
  }
  v11 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  v18 = 21;
  *(_QWORD *)v17 = "ComputeScribbleFrom12";
  SharedFence = CD3DDevice::CreateSharedFence(
                  a2,
                  (const struct CResourceTag *)v17,
                  v8,
                  (struct CSharedFence **)this + 2);
  if ( SharedFence < 0 )
  {
    v9 = 32LL;
    goto LABEL_5;
  }
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      (wil::details **)this + 5,
      Event);
  }
  else
  {
    SharedFence = wil::details::GetLastErrorFailHr(v13, v12, v15, v16);
    if ( SharedFence < 0 )
    {
      v9 = 34LL;
      goto LABEL_5;
    }
  }
  return 0LL;
}
