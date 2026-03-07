__int64 __fastcall KseDsCallbackHookIrpPowerFunction(__int64 a1, __int64 a2)
{
  int v3; // edi
  unsigned __int8 *v4; // rcx
  int v5; // ebx
  int v7; // r14d
  __int64 v8; // r15
  __int64 v9; // rax
  unsigned int v10; // eax
  unsigned int v11; // r15d

  v3 = 0;
  v4 = *(unsigned __int8 **)(a2 + 184);
  LOBYTE(v5) = 0;
  v7 = v4[1];
  v8 = *v4;
  if ( (unsigned int)(v7 - 2) <= 1 )
  {
    v3 = *((_DWORD *)v4 + 4);
    v5 = *((_DWORD *)v4 + 6);
    if ( v3 == 1 )
      (*(void (__fastcall **)(__int64, __int64, __int64 (__fastcall *)(), _QWORD))(qword_140C047C8 + 8))(
        a1,
        a2,
        KseDsCompletionHookForPowerDevice,
        0LL);
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD))qword_140C047C8)(*(_QWORD *)(a1 + 8));
  v10 = (*(__int64 (__fastcall **)(__int64, __int64))(v9 + 8 * v8 + 32))(a1, a2);
  v11 = v10;
  if ( (unsigned int)(v7 - 2) <= 1 )
  {
    if ( v3 )
    {
      if ( v3 == 1 )
        KsepDsEventDevicePowerIrp(*(_QWORD *)(a1 + 8), a1, a2, v7, 1, v5, v10);
    }
    else
    {
      KsepDsEventSystemPowerIrp(*(_QWORD *)(a1 + 8), a1, a2, v7, 0, v5, v10);
    }
  }
  return v11;
}
