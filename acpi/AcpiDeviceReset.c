__int64 __fastcall AcpiDeviceReset(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r14
  unsigned int v9; // ebx
  unsigned int v10; // eax
  __int64 v11; // rcx
  unsigned int (__fastcall *v12)(_QWORD, _QWORD, _QWORD, __int64); // rax
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  if ( !a2 )
  {
    v10 = AcpiFunctionLevelDeviceReset(a1, a4);
    goto LABEL_6;
  }
  if ( a2 == 1 )
  {
    v14 = 0LL;
    v10 = AcpiPlatformLevelDeviceReset(a1, &v14);
LABEL_6:
    v9 = v10;
    goto LABEL_7;
  }
  v9 = -1073741637;
LABEL_7:
  AcpiDiagTraceDeviceReset(v4, a2, v9);
  if ( v9 == -1073741637 )
  {
    v11 = *(_QWORD *)(a1 + 80);
    if ( v11 )
    {
      v12 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v11 + 32);
      if ( v12 )
        return v12(*(_QWORD *)(v11 + 8), a2, a3, a4);
    }
  }
  return v9;
}
