/*
 * XREFs of NtUserBuildNameList @ 0x1C0117020
 * Callers:
 *     <none>
 * Callees:
 *     _BuildNameList @ 0x1C0117134 (_BuildNameList.c)
 */

__int64 __fastcall NtUserBuildNameList(__int64 a1, unsigned int a2, _WORD *a3, _DWORD *a4)
{
  PVOID v8; // rcx
  _DWORD *v9; // rdx
  __int64 v10; // rdx
  int v11; // ebx
  PVOID Object[7]; // [rsp+20h] [rbp-38h] BYREF
  int v14; // [rsp+68h] [rbp+10h] BYREF

  v14 = 0;
  Object[0] = 0LL;
  EnterSharedCrit(0LL, 1LL);
  if ( a2 < 0xC )
  {
    v11 = -1073741816;
  }
  else
  {
    v9 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v9 = (_DWORD *)MmUserProbeAddress;
    *v9 = *v9;
    ProbeForWrite(a3, a2, 4u);
    if ( a1 )
    {
      LOBYTE(v10) = 1;
      v11 = ValidateHwinsta(a1, v10, 1LL, Object);
    }
    else
    {
      v11 = 0;
    }
    if ( v11 < 0 )
    {
      a3[4] = 0;
      *(_DWORD *)a3 = 1;
    }
    else
    {
      v11 = BuildNameList(Object[0], a3, a2, &v14);
      *a4 = v14;
      v8 = Object[0];
      if ( Object[0] )
        ObfDereferenceObject(Object[0]);
    }
  }
  UserSessionSwitchLeaveCrit(v8);
  return (unsigned int)v11;
}
