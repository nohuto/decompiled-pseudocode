/*
 * XREFs of DxgkNetDispStartMiracastDisplayDevice @ 0x1C02CEC90
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z @ 0x1C0045498 (-DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z.c)
 *     ?IsAllowedToCallMiracast@@YA_NXZ @ 0x1C0045B38 (-IsAllowedToCallMiracast@@YA_NXZ.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C00615C4 (DxgkMiracastStartMiracastSession.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkNetDispStartMiracastDisplayDevice(_OWORD *a1)
{
  struct _KEVENT *v2; // rdi
  HANDLE *v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  struct DXGPROCESS *Current; // rax
  char *v9; // rax
  NTSTATUS v10; // eax
  NTSTATUS v11[4]; // [rsp+50h] [rbp-268h] BYREF
  HANDLE v12[70]; // [rsp+60h] [rbp-258h] BYREF
  __int128 Object; // [rsp+290h] [rbp-28h] BYREF

  Object = 0LL;
  memset(v12, 0, 0x228uLL);
  v2 = 0LL;
  if ( !IsAllowedToCallMiracast() )
    return -2147483640LL;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (_OWORD *)MmUserProbeAddress;
  v4 = v12;
  v5 = 4LL;
  do
  {
    *(_OWORD *)v4 = *a1;
    *((_OWORD *)v4 + 1) = a1[1];
    *((_OWORD *)v4 + 2) = a1[2];
    *((_OWORD *)v4 + 3) = a1[3];
    *((_OWORD *)v4 + 4) = a1[4];
    *((_OWORD *)v4 + 5) = a1[5];
    *((_OWORD *)v4 + 6) = a1[6];
    v4 += 16;
    *((_OWORD *)v4 - 1) = a1[7];
    a1 += 8;
    --v5;
  }
  while ( v5 );
  *(_OWORD *)v4 = *a1;
  *((_OWORD *)v4 + 1) = a1[1];
  v4[4] = (HANDLE)*((_QWORD *)a1 + 4);
  if ( LODWORD(v12[0]) == 552 )
  {
    Current = DXGPROCESS::GetCurrent((__int64)v4);
    v11[0] = DxgkNetDispAccessCheck(Current);
    if ( v11[0] >= 0 )
    {
      v9 = (char *)v12[67] - Object;
      if ( v12[67] == (HANDLE)Object )
        v9 = (char *)v12[68] - *((_QWORD *)&Object + 1);
      if ( v9 || (v11[0] = ExUuidCreate((UUID *)&v12[67]), v11[0] >= 0) )
      {
        if ( v12[66]
          && (*(_QWORD *)&Object = 0LL,
              v10 = ObReferenceObjectByHandle(
                      v12[66],
                      0x1F0003u,
                      (POBJECT_TYPE)ExEventObjectType,
                      1,
                      (PVOID *)&Object,
                      0LL),
              v2 = (struct _KEVENT *)Object,
              v11[0] = v10,
              v10 < 0) )
        {
          v6 = -2147483640;
          WdLogSingleEntry1(2LL, v12[66]);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Caller specified event handle (0x%I64x) is not an valid event handle.",
            (__int64)v12[66],
            0LL,
            0LL,
            0LL,
            0LL);
        }
        else
        {
          return (unsigned int)DxgkMiracastStartMiracastSession((unsigned __int16 *)v12, v2, v11);
        }
        return v6;
      }
      v7 = -2147483647LL;
    }
    else
    {
      v7 = -2147483643LL;
    }
    v6 = v7;
  }
  else
  {
    v6 = -2147483640;
    v7 = -2147483640LL;
  }
  WdLogSingleEntry1(3LL, v7);
  return v6;
}
