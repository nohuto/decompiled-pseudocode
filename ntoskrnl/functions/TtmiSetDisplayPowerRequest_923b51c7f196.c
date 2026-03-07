__int64 __fastcall TtmiSetDisplayPowerRequest(__int64 a1, _DWORD *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // ebx
  int v9; // r8d
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 i; // r10
  __int64 *v13; // r10
  int v14; // ecx
  _DWORD *Pool2; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  __int64 v20; // r11
  __int64 j; // r10
  _QWORD *v22; // r10
  __int64 v24; // rdx
  _QWORD *v25; // rax
  int v26; // eax
  int v27; // eax
  __int64 v28; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v29[4]; // [rsp+38h] [rbp-20h] BYREF

  v4 = 0;
  v28 = 0LL;
  v29[0] = 0LL;
  if ( a4 )
  {
    if ( !(unsigned __int8)TtmpFindPowerRequestEntryById(a1, a3, &v28) )
    {
      v10 = 818LL;
LABEL_28:
      v4 = -1073741275;
      goto LABEL_29;
    }
    v11 = v28 + 48;
    for ( i = *(_QWORD *)(v28 + 48); i != v11; i = *v13 )
    {
      if ( (int)TtmiGetTerminalById(v29, a1) >= 0 && *(_DWORD *)(v29[0] + 28LL) == a2[7] )
      {
        v4 = -1073741270;
        v10 = 861LL;
        goto LABEL_29;
      }
    }
    if ( a2[8] == -1 )
    {
      v4 = -1073741675;
      v10 = 874LL;
      goto LABEL_29;
    }
    v14 = a2[10];
    if ( (unsigned int)(v14 - 2) > 1 )
    {
      v4 = -1073741637;
      goto LABEL_31;
    }
    if ( v14 == 2 )
    {
      LOBYTE(v9) = 1;
      TtmiSetPendingOnOffRequest(a1, (_DWORD)a2, v9, 8, 1413571669);
    }
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, 24LL, 1381004372LL);
    if ( !Pool2 )
    {
      v4 = -1073741670;
      v16 = 0xFFFFFFFFLL;
      v17 = 3221225626LL;
      v10 = 892LL;
      goto LABEL_30;
    }
    *Pool2 = a2[7];
    v18 = Pool2 + 2;
    v19 = *(_QWORD **)(v11 + 8);
    if ( *v19 == v11 )
    {
      *v18 = v11;
      v18[1] = v19;
      *v19 = v18;
      *(_QWORD *)(v11 + 8) = v18;
      ++a2[8];
      goto LABEL_31;
    }
    goto LABEL_38;
  }
  if ( !(unsigned __int8)TtmpFindPowerRequestEntryById(a1, a3, &v28) )
  {
    v10 = 934LL;
    goto LABEL_28;
  }
  v20 = v28 + 48;
  for ( j = *(_QWORD *)(v28 + 48); ; j = *v22 )
  {
    if ( j == v20 )
    {
      v10 = 978LL;
      goto LABEL_28;
    }
    if ( (int)TtmiGetTerminalById(v29, a1) >= 0 && *(_DWORD *)(v29[0] + 28LL) == a2[7] )
      break;
  }
  v24 = *v22;
  if ( *(_QWORD **)(*v22 + 8LL) != v22 || (v25 = (_QWORD *)v22[1], (_QWORD *)*v25 != v22) )
LABEL_38:
    __fastfail(3u);
  *v25 = v24;
  *(_QWORD *)(v24 + 8) = v25;
  ExFreePoolWithTag(v22 - 1, 0x52507454u);
  v26 = a2[8];
  if ( v26 )
  {
    v27 = v26 - 1;
    a2[8] = v27;
    if ( !v27 )
    {
      a2[9] |= 0x24u;
      TtmiScheduleSessionWorker(a1, 2);
    }
  }
  else
  {
    v4 = -1073741811;
    v10 = 1005LL;
LABEL_29:
    v17 = 0xFFFFFFFFLL;
    v16 = v4;
LABEL_30:
    TtmiLogError("TtmiSetDisplayPowerRequest", v10, v16, v17);
  }
LABEL_31:
  TtmiLogDisplayPowerRequestSet((unsigned int)a2[7], a3, a4, v4);
  return v4;
}
