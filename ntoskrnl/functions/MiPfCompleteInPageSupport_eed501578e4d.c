__int64 __fastcall MiPfCompleteInPageSupport(__int64 a1, __int64 a2)
{
  __int64 AnyMultiplexedVm; // rbx
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  __int64 v9; // rcx
  __int64 v10; // [rsp+20h] [rbp-59h] BYREF
  _QWORD v11[18]; // [rsp+30h] [rbp-49h] BYREF

  v10 = 0LL;
  AnyMultiplexedVm = a2;
  if ( a2 == 1 )
  {
    v5 = *(unsigned int *)(a1 + 192);
    v6 = ((*(_DWORD *)(a1 + 192) >> 1) & 3) - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          if ( v8 != 2 )
          {
LABEL_12:
            *(_DWORD *)(a1 + 192) = v5 & 0xFFFFFFF9;
            goto LABEL_2;
          }
          v9 = 4LL;
        }
        else
        {
          v9 = 1LL;
        }
      }
      else
      {
        v9 = 2LL;
      }
    }
    else
    {
      v9 = 0LL;
    }
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(v9, v5);
    goto LABEL_12;
  }
LABEL_2:
  *(_DWORD *)(a1 + 192) |= 0x1000000u;
  memset(v11, 0, 0x88uLL);
  MiFillPteHierarchy(0LL, &v11[3]);
  memset(v11, 0, 24);
  LODWORD(v11[10]) &= ~0x20u;
  v11[7] = AnyMultiplexedVm;
  MiWaitForInPageComplete(v11, a1, &v10);
  return MiFinishHardFault(v11, 0LL, a1, 0LL, v10);
}
