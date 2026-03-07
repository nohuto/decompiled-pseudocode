__int64 __fastcall MidString(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // rsi
  unsigned int v6; // ebx
  __int16 v7; // dx
  int v8; // ecx
  __int64 v9; // rax
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // r15
  __int64 v12; // rax
  unsigned int v13; // ebp
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v17; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 80);
  v4 = 0LL;
  v17 = 0LL;
  v6 = ValidateArgTypes(a1, v3, 0, "TII");
  if ( !v6 )
  {
    v6 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 120LL, 135, (__int64)&v17);
    if ( !v6 )
    {
      v7 = *(_WORD *)(*(_QWORD *)(a2 + 80) + 2LL);
      if ( v7 != 2 && v7 != 3 )
      {
        v6 = -1072431098;
        LogError(-1072431098);
        AcpiDiagTraceAmlError(a1, -1072431098);
        v8 = 107;
LABEL_6:
        PrintDebugMessage(v8, 0LL, 0LL, 0LL, 0LL);
        return v6;
      }
      *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = v7;
      v9 = *(_QWORD *)(a2 + 80);
      v10 = *(unsigned int *)(v9 + 24);
      v11 = *(_QWORD *)(v9 + 56);
      if ( v11 >= v10 )
      {
        if ( *(_WORD *)(v9 + 2) != 2 )
          return v6;
        v12 = HeapAlloc(gpheapGlobal, 1381258056, 1u);
        *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v12;
        if ( !v12 )
        {
          v6 = -1073741670;
          LogError(-1073741670);
          AcpiDiagTraceAmlError(a1, -1073741670);
          v8 = 105;
          goto LABEL_6;
        }
        **(_BYTE **)(*(_QWORD *)(a2 + 88) + 32LL) = 0;
        *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = 1;
        return (unsigned int)WriteObject(a1, v17, *(_QWORD *)(a2 + 88));
      }
      if ( *(_QWORD *)(v9 + 96) + v11 < v10 )
        v13 = *(_QWORD *)(v9 + 96);
      else
        v13 = v10 - v11;
      if ( *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) == 2 )
      {
        v14 = HeapAlloc(gpheapGlobal, 1381258056, v13 + 1);
        *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v14;
        if ( !v14 )
        {
          v6 = -1073741670;
          LogError(-1073741670);
          AcpiDiagTraceAmlError(a1, -1073741670);
          PrintDebugMessage(106, 0LL, 0LL, 0LL, 0LL);
        }
        *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v13 + 1;
      }
      else
      {
        v15 = HeapAlloc(gpheapGlobal, 1179992648, v13);
        *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v15;
        if ( !v15 )
        {
          v6 = -1073741670;
          LogError(-1073741670);
          AcpiDiagTraceAmlError(a1, -1073741670);
          PrintDebugMessage(105, 0LL, 0LL, 0LL, 0LL);
        }
        *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v13;
      }
      if ( !v6 )
      {
        if ( v13 )
        {
          do
          {
            *(_BYTE *)(v4 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = *(_BYTE *)(v4
                                                                                 + *(_QWORD *)(*(_QWORD *)(a2 + 80)
                                                                                             + 32LL)
                                                                                 + v11);
            ++v4;
          }
          while ( v4 < v13 );
        }
        return (unsigned int)WriteObject(a1, v17, *(_QWORD *)(a2 + 88));
      }
    }
  }
  return v6;
}
