__int64 __fastcall ACPIAmliEvaluateDsm(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        _DWORD *a5,
        _QWORD *a6)
{
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 *v9; // rbp
  int v10; // ebx
  __int64 v11; // rdx
  __int64 Pool2; // rsi
  _WORD *v13; // rdi
  int v14; // eax

  v7 = a4;
  v8 = a3;
  v9 = AMLIGetNamedChild(a1, 1297302623);
  if ( v9 )
  {
    Pool2 = ExAllocatePool2(64LL, 160LL, 1097884481LL);
    if ( Pool2 )
    {
      v13 = (_WORD *)ExAllocatePool2(64LL, 40LL, 1383097153LL);
      if ( v13 )
      {
        *(_DWORD *)(Pool2 + 24) = 16;
        *(_WORD *)(Pool2 + 2) = 3;
        *(_QWORD *)(Pool2 + 32) = a2;
        *(_QWORD *)(Pool2 + 56) = v8;
        *(_QWORD *)(Pool2 + 96) = v7;
        *(_WORD *)(Pool2 + 42) = 1;
        *(_WORD *)(Pool2 + 82) = 1;
        *(_WORD *)(Pool2 + 122) = 4;
        if ( *a5 )
          v14 = 40 * *a5 + 8;
        else
          v14 = 48;
        *(_QWORD *)(Pool2 + 152) = a5;
        *(_DWORD *)(Pool2 + 144) = v14;
        v10 = AMLIEvalNameSpaceObject(v9, (__int64)v13, 4u, Pool2);
        if ( v10 >= 0 )
        {
          if ( (_DWORD)v7 || v13[1] == 3 )
          {
            *a6 = v13;
            v10 = 0;
          }
          else
          {
            v10 = -1073741823;
          }
        }
      }
      else
      {
        v10 = -1073741670;
      }
      ExFreePoolWithTag((PVOID)Pool2, 0x41706341u);
      if ( v10 < 0 && v13 )
        ExFreePoolWithTag(v13, 0x52706341u);
    }
    else
    {
      v10 = -1073741670;
    }
    AMLIDereferenceHandleEx((volatile signed __int32 *)v9, v11);
  }
  else
  {
    return (unsigned int)-1073741772;
  }
  return (unsigned int)v10;
}
