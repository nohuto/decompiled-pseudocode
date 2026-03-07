__int64 __fastcall PiCMGetObjectList(
        unsigned __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r12
  void *Pool2; // rsi
  int v10; // ebx
  int v11; // r8d
  int v12; // r9d
  int v13; // ecx
  int v14; // ebx
  unsigned int v15; // edi
  unsigned int v16; // edi
  signed int ObjectList; // eax
  unsigned int v18; // r10d
  int v19; // eax
  __int128 v21; // [rsp+50h] [rbp-30h] BYREF
  __int128 v22; // [rsp+60h] [rbp-20h]
  __int64 v23; // [rsp+70h] [rbp-10h]

  v6 = a6;
  LODWORD(a6) = 0;
  v23 = 0LL;
  Pool2 = 0LL;
  *v6 = 0;
  v21 = 0LL;
  v22 = 0LL;
  v10 = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v21);
  if ( v10 < 0 )
    goto LABEL_20;
  if ( (_QWORD)v22 || __PAIR64__(DWORD2(v22), 0) != DWORD1(v21) || HIDWORD(v22) || !a3 || a4 < 0x14 )
    goto LABEL_43;
  v13 = DWORD2(v21);
  v14 = 6;
  if ( SDWORD2(v21) > 6 )
  {
    v13 = DWORD2(v21) - 65537;
    if ( DWORD2(v21) == 65537 )
    {
      v14 = 7;
    }
    else
    {
      v13 = DWORD2(v21) - 65538;
      if ( DWORD2(v21) == 65538 )
      {
        v14 = 8;
      }
      else
      {
        v13 = DWORD2(v21) - 65539;
        if ( DWORD2(v21) == 65539 )
        {
          v14 = 9;
        }
        else
        {
          v13 = DWORD2(v21) - 65540;
          if ( DWORD2(v21) == 65540 )
          {
            v14 = 10;
          }
          else
          {
            if ( DWORD2(v21) != 65541 )
              goto LABEL_43;
            v14 = 11;
          }
        }
      }
    }
    if ( PiDrvDbCtx )
      goto LABEL_11;
LABEL_43:
    v18 = -1073741811;
    goto LABEL_17;
  }
  if ( DWORD2(v21) != 6 )
  {
    if ( DWORD2(v21) == 1 )
    {
      v18 = -1073741637;
      goto LABEL_17;
    }
    v13 = DWORD2(v21) - 2;
    if ( DWORD2(v21) == 2 )
    {
      v14 = 2;
    }
    else
    {
      v13 = DWORD2(v21) - 3;
      if ( DWORD2(v21) == 3 )
      {
        v14 = 4;
      }
      else
      {
        v13 = DWORD2(v21) - 4;
        if ( DWORD2(v21) == 4 )
        {
          v14 = 3;
        }
        else
        {
          if ( DWORD2(v21) != 5 )
            goto LABEL_43;
          v14 = 5;
        }
      }
    }
  }
LABEL_11:
  v15 = 0;
  if ( a4 - 20 >= 2 )
    v15 = a4 - 20;
  if ( v15 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, v15, 879783504LL);
    if ( !Pool2 )
    {
      v18 = -1073741670;
      goto LABEL_17;
    }
    v16 = v15 >> 1;
  }
  else
  {
    v16 = 0;
  }
  LODWORD(a6) = v16;
  ObjectList = PnpGetObjectList(v13, v14, v11, v12, (__int64)Pool2, v16, (__int64)&a6, 0);
  v18 = ObjectList;
  if ( ObjectList < 0 )
  {
LABEL_17:
    v19 = PiCMReturnBufferResultData(v18, 2 * (int)a6, 0, 0LL, 0, v23, a3, a4, v6);
    goto LABEL_18;
  }
  v19 = PiCMReturnBufferResultData(ObjectList, 2 * (int)a6, 0, Pool2, 2 * (int)a6, v23, a3, a4, v6);
LABEL_18:
  v10 = v19;
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x34706E50u);
LABEL_20:
  PiCMReleaseObjectInputData((__int64)&v21);
  return (unsigned int)v10;
}
