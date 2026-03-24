/*
 * XREFs of NtUserBuildHimcList @ 0x1C0125E40
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069AF0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069B4C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     _BuildHimcList @ 0x1C0125F38 (_BuildHimcList.c)
 */

__int64 __fastcall NtUserBuildHimcList(unsigned int a1, unsigned int a2, volatile void *a3, unsigned int *a4)
{
  __int64 v6; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rbx
  _DWORD *v11; // rdx
  unsigned int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  _BYTE v18[32]; // [rsp+28h] [rbp-20h] BYREF

  v6 = a2;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v18);
  if ( (*gpsi & 4) != 0 )
  {
    if ( a1 )
    {
      if ( a1 == -1 )
      {
        v10 = 0LL;
      }
      else
      {
        v16 = PtiFromThreadId(a1);
        v10 = v16;
        if ( !v16 || (v17 = *(_QWORD *)(v16 + 456)) == 0 )
        {
          v13 = -1073741811;
          goto LABEL_7;
        }
        if ( v17 != *(_QWORD *)(gptiCurrent + 456LL) )
        {
          v13 = -1073741790;
          goto LABEL_7;
        }
      }
    }
    else
    {
      v10 = gptiCurrent;
    }
    ProbeForWrite(a3, 8 * v6, 4u);
    v11 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v11 = (_DWORD *)MmUserProbeAddress;
    *v11 = *v11;
    v12 = BuildHimcList(v10, (unsigned int)v6, a3);
    v13 = (unsigned int)v6 < v12 ? 0xC0000023 : 0;
    *a4 = v12;
  }
  else
  {
    UserSetLastError(120LL, v8, v9);
    v13 = -1073741823;
  }
LABEL_7:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v18);
  UserSessionSwitchLeaveCrit(v14);
  return v13;
}
