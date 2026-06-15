/*
 * XREFs of sub_18012DCE0 @ 0x18012DCE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800103D4 @ 0x1800103D4 (sub_1800103D4.c)
 *     sub_180010A50 @ 0x180010A50 (sub_180010A50.c)
 *     sub_180047614 @ 0x180047614 (sub_180047614.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18004CA38 @ 0x18004CA38 (sub_18004CA38.c)
 *     sub_18012D86C @ 0x18012D86C (sub_18012D86C.c)
 *     sub_18012D91C @ 0x18012D91C (sub_18012D91C.c)
 */

__int64 __fastcall sub_18012DCE0(__int64 a1, __int64 a2, _QWORD *a3)
{
  LPCRITICAL_SECTION v3; // rdi
  int DebugInfo; // ebx
  RPC_BINDING_HANDLE v6; // rdi
  DWORD LastError; // ebx
  int v8; // eax
  int v9; // edx
  LPCRITICAL_SECTION v10; // rdi
  _QWORD *v13[3]; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF
  RPC_BINDING_HANDLE Binding; // [rsp+58h] [rbp+20h] BYREF

  v15 = a2;
  v3 = lpCriticalSection;
  Binding = 0LL;
  EnterCriticalSection(lpCriticalSection);
  DebugInfo = ++LODWORD(v3[1].DebugInfo);
  if ( DebugInfo == 1 )
  {
    sub_18012D91C(v3);
    sub_180010A50((__int64)v3);
    DebugInfo = (int)v3[1].DebugInfo;
  }
  LeaveCriticalSection(v3);
  if ( DebugInfo < 0 )
  {
    sub_18004BD84((int)retaddr, 831, (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp", DebugInfo);
    goto LABEL_15;
  }
  v6 = Binding;
  if ( Binding )
  {
    LastError = GetLastError();
    sub_180047614(v6);
    SetLastError(LastError);
  }
  v8 = sub_18004CA38(&Binding);
  DebugInfo = v8;
  if ( v8 >= 0 )
  {
    v13[0] = &Binding;
    v13[1] = &v15;
    v8 = sub_18012D86C(v13);
    DebugInfo = v8;
    if ( v8 >= 0 )
    {
      DebugInfo = 0;
      *a3 = *(_QWORD *)&lpCriticalSection[2].LockCount;
      goto LABEL_15;
    }
    v9 = 843;
  }
  else
  {
    v9 = 834;
  }
  sub_18004BD84((int)retaddr, v9, (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp", v8);
  v10 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  if ( LODWORD(v10[1].DebugInfo)-- == 1 )
    sub_1800103D4((__int64)v10);
  LeaveCriticalSection(v10);
LABEL_15:
  if ( Binding )
    sub_180047614(Binding);
  return (unsigned int)DebugInfo;
}
