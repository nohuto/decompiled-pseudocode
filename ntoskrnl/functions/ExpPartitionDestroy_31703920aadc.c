void __fastcall ExpPartitionDestroy(PVOID P, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int16 i; // si
  __int64 v6; // rdi
  unsigned __int16 j; // si
  unsigned __int16 *v8; // r15
  __int64 v9; // rbp
  __int64 v10; // rdx
  _DWORD *v11; // rdi

  if ( *((_QWORD *)P + 2) )
  {
    for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
    {
      v6 = *(_QWORD *)(*((_QWORD *)P + 2) + 8LL * i);
      if ( v6 )
      {
        if ( *(_QWORD *)(v6 + 264) )
        {
          *(_DWORD *)(v6 + 272) = 1;
          KeSetEvent((PRKEVENT)(v6 + 16), 0, 0);
          ZwWaitForSingleObject(*(HANDLE *)(v6 + 264), 0, 0LL);
          ZwClose(*(HANDLE *)(v6 + 264));
        }
        KeCancelTimer2(v6 + 128, 0LL, a3, a4);
        KeCancelTimer((PKTIMER)(v6 + 40));
        KeFlushQueuedDpcs();
        ExFreePoolWithTag(*(PVOID *)(*((_QWORD *)P + 2) + 8LL * i), 0);
      }
    }
    ExFreePoolWithTag(*((PVOID *)P + 2), 0);
  }
  if ( *((_QWORD *)P + 1) )
  {
    for ( j = 0; j < (unsigned __int16)KeNumberNodes; ++j )
    {
      if ( *(_QWORD *)(*((_QWORD *)P + 1) + 8LL * j) )
      {
        v8 = 0LL;
        v9 = 0LL;
        if ( (_UNKNOWN *)KeNodeBlock[j] != (_UNKNOWN *)((char *)&KiNodeInit + 304 * j) )
          v8 = (unsigned __int16 *)KeNodeBlock[j];
        do
        {
          v10 = *(_QWORD *)(*((_QWORD *)P + 1) + 8LL * *v8);
          v11 = *(_DWORD **)(v10 + v9);
          if ( ((unsigned __int8)v11 & 1) == 0 && v11 )
          {
            if ( v11[1] )
              KeBugCheckEx(0x18Eu, 2uLL, *(_QWORD *)P, *(_QWORD *)(v10 + v9), 0LL);
            ExpWorkQueueDestroy(*(_QWORD *)(v10 + v9));
            ExFreePoolWithTag(v11, 0);
          }
          v9 += 8LL;
        }
        while ( v9 < 64 );
        ExFreePoolWithTag(*(PVOID *)(*((_QWORD *)P + 1) + 8LL * j), 0);
      }
    }
    ExFreePoolWithTag(*((PVOID *)P + 1), 0);
  }
  ExFreePoolWithTag(P, 0);
}
