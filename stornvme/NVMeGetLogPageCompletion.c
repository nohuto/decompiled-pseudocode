__int64 __fastcall NVMeGetLogPageCompletion(__int64 a1, __int64 a2)
{
  unsigned __int64 LocalCommand; // r14
  __int64 v4; // r11
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // r11
  __int64 v8; // rdi
  char v9; // r15
  char v10; // cl
  __int64 v11; // r9
  __int64 v12; // rdx
  char v13; // si
  char v14; // al
  _DWORD *v15; // rsi
  char v16; // bp
  __int16 v17; // cx
  _DWORD *v18; // rdx

  LocalCommand = GetLocalCommand(a1, a2);
  result = GetSrbExtension(v4);
  v8 = result;
  v9 = 0;
  if ( !LocalCommand )
  {
    *(_BYTE *)(result + 4253) |= 8u;
    return result;
  }
  v10 = *(_BYTE *)(v7 + 3);
  if ( v10 != 14 )
  {
    result = *(unsigned int *)(a1 + 32);
    if ( (result & 0xE) == 0 )
    {
      v11 = 9LL;
      v12 = *(_QWORD *)(LocalCommand + 96);
      v13 = *(_BYTE *)(v12 + 4136);
      if ( !*(_QWORD *)(v8 + 4200) )
        goto LABEL_33;
      if ( v10 != 1 )
      {
        v16 = 1;
        if ( v13 == 4 && (v17 = *(_WORD *)(v8 + 4250), (v17 & 0xE00) == 0x200) && (v17 & 0x1FE) == 0x12 )
        {
          v18 = *(_DWORD **)(v12 + 4200);
          *v18 = -1;
          NVMeReenumerateNameSpaceStart(a1, v18, 512LL, 9LL);
        }
        else
        {
          v16 = 0;
        }
        if ( *(_BYTE *)(a1 + 22) && v16 )
          StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
        goto LABEL_32;
      }
      if ( v13 != 1 )
      {
        switch ( v13 )
        {
          case 2:
            v14 = ProcessNvmeHealthInfoLog(a1, v7, *(_QWORD *)(v12 + 4200), 9LL);
LABEL_23:
            v9 = v14;
            break;
          case -128:
            v14 = ProcessNvmeReservationNotification(a1, v7, *(_QWORD *)(v12 + 4200), 9LL);
            goto LABEL_23;
          case 4:
            v15 = *(_DWORD **)(v12 + 4200);
            if ( *(_BYTE *)(a1 + 22) )
              StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
            if ( *v15 )
            {
              NVMeReenumerateNameSpaceStart(a1, v15, v6, v11);
            }
            else
            {
              _interlockedbittestandreset((volatile signed __int32 *)(a1 + 4028), 2u);
              _interlockedbittestandreset((volatile signed __int32 *)(a1 + 4028), 1u);
            }
            break;
          case 8:
            if ( *(_BYTE *)(a1 + 22) )
              StorPortExtendedFunction(105LL, a1, 0LL, 1LL);
            break;
          case -127:
            v14 = ProcessNvmeSanitizeStatus(a1, v7, *(_QWORD *)(v12 + 4200), 9LL);
            goto LABEL_23;
        }
      }
LABEL_32:
      NVMeFreeDmaBuffer(
        a1,
        *(unsigned int *)(*(_QWORD *)(LocalCommand + 96) + 4240LL),
        (__int64 *)(*(_QWORD *)(LocalCommand + 96) + 4200LL),
        *(_QWORD *)(*(_QWORD *)(LocalCommand + 96) + 4208LL));
      *(_BYTE *)(v8 + 4253) |= 8u;
      *(_DWORD *)(v8 + 4240) = 0;
LABEL_33:
      *(_BYTE *)LocalCommand = 0;
      if ( !v9 )
        return NVMeIssueAsyncEventCommand(a1, LocalCommand);
      LocalCommandReuse(a1, LocalCommand);
      *(_BYTE *)(*(_QWORD *)(LocalCommand + 96) + 4253LL) |= 1u;
      *(_BYTE *)(*(_QWORD *)(LocalCommand + 96) + 4253LL) &= ~2u;
      *(_WORD *)(*(_QWORD *)(LocalCommand + 96) + 4244LL) = 0;
      *(_DWORD *)(v8 + 4140) = *(_DWORD *)(a1 + 4232);
      *(_QWORD *)(v8 + 4224) = NVMeReConfigAsyncEventCompletion;
      *(_BYTE *)(v8 + 4096) = 9;
      *(_BYTE *)(v8 + 4136) = 11;
      return ProcessCommand(a1, LocalCommand + 8);
    }
  }
  if ( *(_QWORD *)(v8 + 4200) )
  {
    result = NVMeFreeDmaBuffer(
               a1,
               *(unsigned int *)(*(_QWORD *)(LocalCommand + 96) + 4240LL),
               (__int64 *)(*(_QWORD *)(LocalCommand + 96) + 4200LL),
               *(_QWORD *)(*(_QWORD *)(LocalCommand + 96) + 4208LL));
    *(_DWORD *)(v8 + 4240) = 0;
  }
  *(_BYTE *)(v8 + 4253) |= 8u;
  return result;
}
