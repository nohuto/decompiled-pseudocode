__int64 __fastcall ToString(__int64 a1, __int64 a2)
{
  int v4; // edx
  unsigned int v5; // ebx
  __int64 v6; // r9
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // eax
  int v11; // ecx
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0LL;
  v4 = *(_DWORD *)(a2 + 76) - 2;
  if ( v4 )
  {
    if ( v4 != 1 )
    {
      LogError(-1072431098);
      AcpiDiagTraceAmlError(a1, -1072431098);
      PrintDebugMessage(191, (const void *)*(unsigned int *)(a2 + 76), 0LL, 0LL, 0LL);
      return (unsigned int)-1072431098;
    }
    v5 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "BI");
    if ( !v5 )
    {
      v5 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 80LL, 133, (__int64)&v13);
      if ( !v5 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(a2 + 80) + 56LL) )
        {
          v7 = (-(__int64)IsCompatableDSDTRevision() & 0xFFFFFFFF00000000uLL) + 0xFFFFFFFF;
          v8 = *(_QWORD *)(a2 + 80);
          if ( *(_QWORD *)(v8 + 56) != v7 )
          {
            v9 = *(unsigned int *)(v8 + 56);
            goto LABEL_13;
          }
        }
LABEL_12:
        v9 = 0LL;
LABEL_13:
        v10 = ConvertToString(*(_QWORD *)(a2 + 80), v9, *(_QWORD *)(a2 + 88), v6);
        v5 = v10;
        switch ( v10 )
        {
          case 0xC000009A:
            LogError(-1073741670);
            AcpiDiagTraceAmlError(a1, -1073741670);
            v11 = 190;
            break;
          case 0xC0000206:
            LogError(-1072431098);
            AcpiDiagTraceAmlError(a1, -1072431098);
            PrintDebugMessage(189, 0LL, 0LL, 0LL, 0LL);
            return (unsigned int)-1072431098;
          case 0xC0140006:
            LogError(-1072431098);
            AcpiDiagTraceAmlError(a1, v5);
            v11 = 192;
            break;
          default:
            return v5;
        }
        PrintDebugMessage(v11, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  else
  {
    v5 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "B");
    if ( !v5 )
    {
      v5 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 40LL, 133, (__int64)&v13);
      if ( !v5 )
        goto LABEL_12;
    }
  }
  return v5;
}
