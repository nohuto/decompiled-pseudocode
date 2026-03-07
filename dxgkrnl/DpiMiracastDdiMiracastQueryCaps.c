__int64 __fastcall DpiMiracastDdiMiracastQueryCaps(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v5; // edi
  _QWORD *v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // r8
  __int64 v10; // [rsp+20h] [rbp-28h]
  int v11; // [rsp+20h] [rbp-28h]
  __int64 v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+30h] [rbp-18h]
  int v15; // [rsp+30h] [rbp-18h]

  v5 = -1073741637;
  if ( *(_QWORD *)(a1 + 3200) )
  {
    v6 = (_QWORD *)(a1 + 48);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
    {
      v15 = 0;
      v13 = 0;
      v11 = 0;
      McTemplateK0pqqq_EtwWriteTransfer(0LL, &EventEnterDxgkDdiMiracastQueryCaps, (__int64)a3, *v6, v11, v13, v15);
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned int *))(a1 + 3200))(*v6, 8LL, a3);
    v5 = v7;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
    {
      LODWORD(v14) = v7;
      LODWORD(v12) = a3[1];
      LODWORD(v10) = *a3;
      McTemplateK0pqqq_EtwWriteTransfer(*a3, &EventLeaveDxgkDdiMiracastQueryCaps, v8, *v6, v10, v12, v14);
    }
  }
  return v5;
}
