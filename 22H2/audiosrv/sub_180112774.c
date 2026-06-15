/*
 * XREFs of sub_180112774 @ 0x180112774
 * Callers:
 *     sub_180111AF8 @ 0x180111AF8 (sub_180111AF8.c)
 *     sub_180112944 @ 0x180112944 (sub_180112944.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800F77E0 @ 0x1800F77E0 (sub_1800F77E0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180112774(unsigned int a1, unsigned int a2, __int64 a3, int a4)
{
  int Instance; // eax
  unsigned int v9; // ebx
  int v10; // edx
  LPVOID v12[3]; // [rsp+40h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v12[0] = 0LL;
  Instance = CoCreateInstance(&stru_18015E170, 0LL, 0x17u, &stru_18015E160, v12);
  v9 = Instance;
  if ( Instance >= 0 )
  {
    Instance = (*(__int64 (__fastcall **)(LPVOID, _QWORD, _QWORD, __int64, int, _DWORD))(*(_QWORD *)v12[0] + 96LL))(
                 v12[0],
                 a1,
                 a2,
                 a3,
                 a4,
                 0);
    v9 = Instance;
    if ( Instance >= 0 )
    {
      Instance = sub_1800F77E0(a1, a2, a3);
      v9 = Instance;
      if ( Instance >= 0 )
      {
        v9 = 0;
        goto LABEL_9;
      }
      v10 = 44;
    }
    else
    {
      v10 = 40;
    }
  }
  else
  {
    v10 = 39;
  }
  sub_18004BD84(
    (int)retaddr,
    v10,
    (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
    Instance);
LABEL_9:
  sub_18000F708((__int64 *)v12);
  return v9;
}
