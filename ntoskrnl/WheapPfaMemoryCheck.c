void __fastcall WheapPfaMemoryCheck(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdx
  char *Pool2; // rbx
  unsigned int v7; // ecx
  PVOID *v8; // rax
  PVOID *v9; // rcx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  bool v12; // cf
  _QWORD *v13; // rax
  unsigned __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = a1;
  if ( !WheapPolicyMemPfaDisable && (*(_BYTE *)a2 & 2) != 0 )
  {
    v2 = *(_QWORD *)(a2 + 16);
    v14 = v2;
    if ( !(unsigned int)MmGetPageBadStatus(&v14) )
    {
      v3 = v2 >> 12;
      v4 = MEMORY[0xFFFFF78000000008];
      WheapPfaRetireExpiredMemoryEntries(MEMORY[0xFFFFF78000000008]);
      if ( !WheapExecuteRowFailureCheck(v3, v5, 0, 0) )
      {
        Pool2 = (char *)WheapPfaList;
        v7 = 0;
        if ( WheapPfaList == &WheapPfaList )
        {
LABEL_8:
          if ( v7 >= WheapPolicyMemPfaPageCount )
          {
            Pool2 = (char *)qword_140D17380;
            v10 = *(_QWORD *)qword_140D17380;
            if ( *(_QWORD *)(*(_QWORD *)qword_140D17380 + 8LL) != qword_140D17380 )
              goto LABEL_22;
            v11 = *(_QWORD **)(qword_140D17380 + 8);
            if ( *v11 != qword_140D17380 )
              goto LABEL_22;
            *v11 = v10;
            *(_QWORD *)(v10 + 8) = v11;
            WheapPfaLogPageMonitorRemoval((__int64)Pool2, 3, v4);
          }
          else
          {
            Pool2 = (char *)ExAllocatePool2(258LL, 48LL, 1634035799LL);
            if ( !Pool2 )
              return;
          }
          *(_QWORD *)Pool2 = 0LL;
          *((_QWORD *)Pool2 + 1) = 0LL;
          *(_DWORD *)(Pool2 + 18) = 0;
          *((_WORD *)Pool2 + 11) = 0;
          *((_WORD *)Pool2 + 8) = 0;
          *((_QWORD *)Pool2 + 3) = v4;
          *((_QWORD *)Pool2 + 5) = v3;
        }
        else
        {
          while ( 1 )
          {
            v8 = *(PVOID **)Pool2;
            if ( *((_QWORD *)Pool2 + 5) == v3 )
              break;
            ++v7;
            Pool2 = *(char **)Pool2;
            if ( v8 == &WheapPfaList )
              goto LABEL_8;
          }
          if ( v8[1] != Pool2 )
            goto LABEL_22;
          v9 = (PVOID *)*((_QWORD *)Pool2 + 1);
          if ( *v9 != Pool2 )
            goto LABEL_22;
          *v9 = v8;
          v8[1] = v9;
        }
        v12 = (unsigned __int16)++*((_WORD *)Pool2 + 8) < (unsigned int)WheapPolicyMemPfaThreshold;
        *((_QWORD *)Pool2 + 4) = v4;
        if ( v12 )
        {
          v13 = WheapPfaList;
          if ( *((PVOID **)WheapPfaList + 1) == &WheapPfaList )
          {
            *(_QWORD *)Pool2 = WheapPfaList;
            *((_QWORD *)Pool2 + 1) = &WheapPfaList;
            v13[1] = Pool2;
            WheapPfaList = Pool2;
            return;
          }
LABEL_22:
          __fastfail(3u);
        }
        WheapPfaLogPageMonitorRemoval((__int64)Pool2, 1, v4);
        WheaAttemptPhysicalPageOffline(v3, 0, 0, 0);
        ExFreePoolWithTag(Pool2, 0x61656857u);
      }
    }
  }
}
