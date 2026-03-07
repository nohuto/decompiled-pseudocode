__int64 __fastcall xxxMsgWaitForMultipleObjectsEx(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, char a5)
{
  _BYTE *v5; // rbp
  bool v6; // di
  int v7; // r13d
  unsigned int v8; // r15d
  int v9; // r12d
  int v10; // r14d
  __int64 v11; // r8
  int v12; // eax
  NTSTATUS v13; // ebx
  __int64 v14; // rax
  ULONG v16; // eax
  int v17; // [rsp+20h] [rbp-88h]
  int v18; // [rsp+28h] [rbp-80h]
  unsigned int v19; // [rsp+40h] [rbp-68h]
  _BYTE v20[12]; // [rsp+44h] [rbp-64h] BYREF
  __int64 v21; // [rsp+50h] [rbp-58h]
  int v22; // [rsp+B0h] [rbp+8h]

  v22 = a1;
  *(_DWORD *)&v20[8] = 0;
  v5 = 0LL;
  v6 = 0;
  v7 = 0;
  v8 = a3;
  v9 = 1;
  v10 = a5 & 1;
  v21 = gptiCurrent;
  v19 = a1 + 1;
  *(_QWORD *)v20 = a5 & 1;
  do
  {
    UserSessionSwitchLeaveCrit(a1);
    if ( v9 )
    {
      if ( v8 == -1 )
      {
        v5 = 0LL;
      }
      else
      {
        v5 = &v20[4];
        *(_QWORD *)&v20[4] = -10000LL * v8;
      }
      v9 = 0;
      v7 = v10;
      v6 = (a5 & 2) != 0;
    }
    do
    {
      LOBYTE(v18) = v6;
      LOBYTE(v11) = 1;
      LOBYTE(v17) = 1;
      v12 = ObWaitForMultipleObjects(v19, a2, v11, v10 ^ 1u, v17, v18, v5);
      v13 = v12;
    }
    while ( v12 >= 0 && v6 && v12 == 257 );
    EnterCrit(1LL, 0LL);
    v10 = *(_DWORD *)v20;
    v8 = a3;
    if ( v7 )
      break;
    if ( v13 != v22 )
      break;
    if ( !(unsigned int)xxxRemoveQueueCompletion() )
      break;
    v14 = *(_QWORD *)(v21 + 448);
    a1 = a4 & *(_DWORD *)(v14 + 8);
  }
  while ( ((unsigned __int8)a4 & *(_BYTE *)(v14 + 8) & 8) == 0 );
  if ( v13 >= 0 )
    return (unsigned int)v13;
  v16 = RtlNtStatusToDosError(v13);
  UserSetLastError(v16);
  return 0xFFFFFFFFLL;
}
