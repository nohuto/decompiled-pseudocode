void __fastcall NotifyHotKeyRegistrationChanged(
        struct tagHOTKEY *const a1,
        struct tagCHILDHOTKEY *const a2,
        unsigned __int8 a3)
{
  int v3; // esi
  int IsEnabledDeviceUsage; // eax
  unsigned int ThreadId; // edx
  int v8; // ecx
  unsigned __int64 v9; // rax
  int v10; // eax
  __int64 v11; // r8
  char v12; // al
  _DWORD v13[3]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v14; // [rsp+2Ch] [rbp-2Ch]
  char v15; // [rsp+2Eh] [rbp-2Ah]
  char v16; // [rsp+2Fh] [rbp-29h]

  v3 = a3;
  IsEnabledDeviceUsage = Feature_ReportShellHotKey__private_IsEnabledDeviceUsage(a1);
  ThreadId = 0;
  v8 = IsEnabledDeviceUsage != 0 ? 35840 : 39936;
  if ( !*((_QWORD *)a1 + 1) )
  {
    v9 = *((_QWORD *)a1 + 2);
    if ( v9 < 0xFFFFFFFFFFFFFFFEuLL && v9 != 1 )
    {
      v10 = *((unsigned __int16 *)a1 + 17);
      if ( (v10 & v8) == 0 )
      {
        v16 = 0;
        if ( a2 )
        {
          v11 = *(_QWORD *)a2;
        }
        else
        {
          if ( (v10 & 0x300) != 0 )
            return;
          v11 = *(_QWORD *)a1;
        }
        v13[1] = *(_DWORD *)(*(_QWORD *)(v11 + 424) + 56LL);
        if ( v11 )
          ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v11);
        v14 = *((_WORD *)a1 + 16);
        v12 = *((_BYTE *)a1 + 36);
        v13[2] = ThreadId;
        v13[0] = v3;
        v15 = v12;
        SendMessageTo(14LL, v13);
      }
    }
  }
}
