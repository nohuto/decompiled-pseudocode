__int64 __fastcall DpiDxgkDdiNotifySurpriseRemoval(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char v4; // al
  __int64 v6; // rsi
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v16; // [rsp+20h] [rbp-18h]
  __int64 v17; // [rsp+28h] [rbp-10h]

  v4 = *(_BYTE *)(a3 + 3920);
  v6 = a4;
  LODWORD(v8) = -1073741637;
  if ( (v4 & 0x18) != 0 && *(_DWORD *)(a1 + 136) >= 0x300Du && *(_QWORD *)(a1 + 792) )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0pqq_EtwWriteTransfer(a1, &EventEnterDdiNotifySurpriseRemoval, a3, a2, a4, 0);
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 792))(a2, (unsigned int)v6);
    v8 = v9;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      LODWORD(v17) = v9;
      LODWORD(v16) = v6;
      McTemplateK0pqq_EtwWriteTransfer(v11, &EventExitDdiNotifySurpriseRemoval, v12, a2, v16, v17);
    }
    v14 = WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
    *(_QWORD *)(v14 + 24) = a1;
    *(_QWORD *)(v14 + 32) = v6;
    *(_QWORD *)(v14 + 40) = v8;
    *(_OWORD *)(v14 + 48) = 0LL;
  }
  else if ( (v4 & 0x10) != 0 )
  {
    LODWORD(v8) = *(_QWORD *)(a1 + 792) != 0LL ? 0xC00000BB : 0;
  }
  return (unsigned int)v8;
}
