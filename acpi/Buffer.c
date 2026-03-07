__int64 __fastcall Buffer(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  unsigned int v5; // edi
  __int64 v6; // rax
  unsigned int v7; // r8d
  __int64 v8; // rax

  v2 = *(_DWORD *)(a2 + 40) - *(_DWORD *)(a1 + 120);
  v5 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "I");
  if ( !v5 )
  {
    if ( (gDebugger & 0xD0) != 0 )
      PrintBuffData(*(unsigned __int8 **)(a1 + 120), v2);
    v6 = *(_QWORD *)(a2 + 80);
    v7 = *(_DWORD *)(v6 + 16);
    if ( v7 >= v2 )
    {
      if ( *(_QWORD *)(v6 + 16) )
      {
        v8 = HeapAlloc(gpheapGlobal, 1179992648, v7);
        *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v8;
        if ( !v8 )
        {
          v5 = -1073741670;
          LogError(-1073741670);
          AcpiDiagTraceAmlError(a1, -1073741670);
          PrintDebugMessage(17, *(const void **)(*(_QWORD *)(a2 + 80) + 16LL), 0LL, 0LL, 0LL);
          return v5;
        }
        *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 3;
        *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 16LL);
        memset(*(void **)(*(_QWORD *)(a2 + 88) + 32LL), 0, *(unsigned int *)(*(_QWORD *)(a2 + 88) + 24LL));
        memmove(*(void **)(*(_QWORD *)(a2 + 88) + 32LL), *(const void **)(a1 + 120), v2);
      }
      else
      {
        *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 3;
        *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = 0;
        *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = 0LL;
      }
      *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 40);
    }
    else
    {
      v5 = -1073741789;
      LogError(-1073741789);
      AcpiDiagTraceAmlError(a1, -1073741789);
      PrintDebugMessage(19, *(const void **)(*(_QWORD *)(a2 + 80) + 16LL), (const void *)v2, 0LL, 0LL);
    }
  }
  return v5;
}
