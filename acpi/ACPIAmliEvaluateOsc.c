__int64 __fastcall ACPIAmliEvaluateOsc(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 v6; // rbx
  __int64 *v7; // rbp
  int v8; // ebx
  __int64 v9; // rdx
  __int64 Pool2; // rsi
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // r15
  size_t v14; // r8
  const void *v15; // rdx

  v6 = a4;
  v7 = AMLIGetNamedChild(a1, 1129533279);
  if ( v7 )
  {
    Pool2 = ExAllocatePool2(64LL, 160LL, 1097884481LL);
    if ( Pool2 )
    {
      v11 = ExAllocatePool2(64LL, 40LL, 1383097153LL);
      v12 = v11;
      if ( v11 )
      {
        *(_QWORD *)(Pool2 + 32) = a2;
        *(_WORD *)(Pool2 + 2) = 3;
        *(_WORD *)(Pool2 + 122) = 3;
        *(_DWORD *)(Pool2 + 24) = 16;
        v13 = v6;
        *(_QWORD *)(Pool2 + 96) = v6;
        *(_WORD *)(Pool2 + 42) = 1;
        *(_QWORD *)(Pool2 + 56) = 1LL;
        *(_WORD *)(Pool2 + 82) = 1;
        *(_DWORD *)(Pool2 + 144) = 4 * v6;
        *(_QWORD *)(Pool2 + 152) = a5;
        v8 = AMLIEvalNameSpaceObject(v7, v11, 4u, Pool2);
        if ( v8 >= 0 )
        {
          if ( *(_WORD *)(v12 + 2) == 3
            && (v14 = *(unsigned int *)(v12 + 24), v14 >= 4 * v13)
            && (v15 = *(const void **)(v12 + 32)) != 0LL
            && (memmove(a5, v15, v14), (*a5 & 0xE) == 0) )
          {
            AMLIFreeDataBuffs(v12);
            v8 = 0;
          }
          else
          {
            v8 = -1073741823;
          }
        }
      }
      else
      {
        v8 = -1073741670;
      }
      ExFreePoolWithTag((PVOID)Pool2, 0x41706341u);
      if ( v12 )
        ExFreePoolWithTag((PVOID)v12, 0x52706341u);
    }
    else
    {
      v8 = -1073741670;
    }
    AMLIDereferenceHandleEx((volatile signed __int32 *)v7, v9);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v8;
}
