__int64 __fastcall SeCaptureObjectTypeList(unsigned __int64 a1, unsigned int a2, char a3, _QWORD *a4)
{
  int v7; // ebx
  _DWORD *Pool2; // r10
  __int64 v9; // rax
  _DWORD *v10; // r13
  unsigned int v11; // edx
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // rcx
  _OWORD *v15; // rdx
  __int64 v16; // r11
  __int64 v17; // r9
  int i; // [rsp+24h] [rbp-74h]
  _DWORD *v20; // [rsp+28h] [rbp-70h]
  _QWORD v21[4]; // [rsp+30h] [rbp-68h]

  HIDWORD(v21[0]) = HIDWORD(a4);
  v7 = 0;
  Pool2 = 0LL;
  *a4 = 0LL;
  if ( a3 != 1 )
    return 3221225474LL;
  if ( a2 )
  {
    if ( a1 )
    {
      v9 = 16LL * a2;
      if ( v9 )
      {
        if ( (a1 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v9 + a1 > 0x7FFFFFFF0000LL || v9 + a1 < a1 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      Pool2 = (_DWORD *)ExAllocatePool2(256LL, 48LL * a2, 1951360339LL);
      v20 = Pool2;
      v10 = Pool2;
      if ( Pool2 )
      {
        v11 = 0;
        for ( i = 0; ; ++i )
        {
          v12 = v11;
          if ( v11 >= a2 )
            break;
          v13 = *(unsigned __int16 *)(a1 + 16LL * v11);
          if ( (unsigned int)v13 > 4 )
            goto LABEL_17;
          v14 = 6LL * v11;
          Pool2[12 * v11] = (unsigned __int16)v13;
          v15 = *(_OWORD **)(a1 + 16LL * v11 + 8);
          if ( ((unsigned __int8)v15 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          *(_OWORD *)&Pool2[2 * v14 + 1] = *v15;
          *(_QWORD *)&Pool2[2 * v14 + 6] = 0LL;
          Pool2[2 * v14 + 8] = 0;
          *(_QWORD *)&Pool2[2 * v14 + 10] = 0LL;
          if ( i )
          {
            v16 = (unsigned int)v13;
            Pool2 = v20;
            if ( (unsigned int)v13 > (unsigned int)LOWORD(v20[12 * (i - 1)]) + 1 || !(_WORD)v13 )
              goto LABEL_17;
          }
          else
          {
            if ( (_WORD)v13 )
            {
              v7 = -1073741811;
              Pool2 = v20;
              break;
            }
            v16 = (unsigned int)v13;
            Pool2 = v20;
          }
          v17 = 6 * v12;
          if ( (_WORD)v13 )
            v10[2 * v17 + 5] = *((_DWORD *)v21 + v16 + 1);
          else
            v10[2 * v17 + 5] = -1;
          *((_DWORD *)&v21[1] + v13) = i;
          v11 = i + 1;
          v7 = 0;
        }
      }
      else
      {
        v7 = -1073741670;
      }
    }
    else
    {
LABEL_17:
      v7 = -1073741811;
    }
  }
  if ( v7 < 0 )
  {
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
  else
  {
    *a4 = Pool2;
  }
  return (unsigned int)v7;
}
