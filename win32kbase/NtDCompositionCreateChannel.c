__int64 __fastcall NtDCompositionCreateChannel(unsigned int *a1, unsigned int *a2, _QWORD *a3)
{
  _QWORD *v3; // r14
  int v6; // ebx
  unsigned int *v7; // rcx
  ULONG64 v8; // rdx
  unsigned int v10; // [rsp+20h] [rbp-38h] BYREF
  void *v11; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v12; // [rsp+78h] [rbp+20h] BYREF

  v3 = a3;
  v6 = 0;
  v10 = 0;
  v12 = 0;
  v11 = 0LL;
  if ( a1 && a2 && a3 )
  {
    v7 = a2;
    v8 = (ULONG64)(a2 + 1);
    if ( v8 < (unsigned __int64)v7 || v8 > MmUserProbeAddress )
      v7 = (unsigned int *)MmUserProbeAddress;
    v12 = *v7;
  }
  else
  {
    v6 = -1073741811;
  }
  if ( v6 >= 0 )
  {
    v6 = DirectComposition::CApplicationChannel::Create(&v10, &v12, &v11);
    if ( v6 >= 0 )
    {
      *a2 = v12;
      if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a1 = v10;
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (_QWORD *)MmUserProbeAddress;
      *v3 = v11;
    }
  }
  return (unsigned int)v6;
}
