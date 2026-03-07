__int64 __fastcall DpiMiracastDdiMiracastIoControl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        _DWORD *a7)
{
  _QWORD *v7; // rbx
  unsigned int v9; // edi
  unsigned int v12; // eax
  __int64 v13; // r8
  unsigned int v14; // ebp
  int v16; // [rsp+28h] [rbp-30h]
  __int64 v17; // [rsp+28h] [rbp-30h]
  __int64 v19; // [rsp+30h] [rbp-28h]
  __int64 v20; // [rsp+38h] [rbp-20h]
  int v21; // [rsp+38h] [rbp-20h]

  v7 = (_QWORD *)(a1 + 48);
  v9 = a3;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
  {
    v21 = 0;
    v16 = a3;
    McTemplateK0ppqqq_EtwWriteTransfer(a1, &EventEnterDxgkDdiMiracastIoControl, a3, *v7, a2, v16, a5, v21);
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, int, __int64, _DWORD *))(a1 + 3216))(
          *v7,
          a2,
          v9,
          a4,
          a5,
          a6,
          a7);
  v14 = v12;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
  {
    LODWORD(v20) = v12;
    LODWORD(v19) = *a7;
    LODWORD(v17) = v9;
    McTemplateK0ppqqq_EtwWriteTransfer(
      (unsigned int)*a7,
      &EventLeaveDxgkDdiMiracastIoControl,
      v13,
      *v7,
      a2,
      v17,
      v19,
      v20);
  }
  return v14;
}
