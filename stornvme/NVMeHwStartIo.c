/*
 * XREFs of NVMeHwStartIo @ 0x1C0001DD0
 * Callers:
 *     <none>
 * Callees:
 *     ProcessCommand @ 0x1C0001E60 (ProcessCommand.c)
 *     GetSrbScsiAddress @ 0x1C0007B00 (GetSrbScsiAddress.c)
 *     NVMeControllerPowerDown @ 0x1C000DF70 (NVMeControllerPowerDown.c)
 *     NVMeSetSenseData @ 0x1C0024238 (NVMeSetSenseData.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025560 (WaitForCommandCompleteWithCustomTimeout.c)
 */

char __fastcall NVMeHwStartIo(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  int v7; // ebp
  __int64 v8; // rdi
  __int64 v10; // rax
  int v11; // ecx
  bool v12; // zf
  __int64 v13; // rcx
  unsigned int v14; // [rsp+50h] [rbp+8h] BYREF
  char v15; // [rsp+58h] [rbp+10h] BYREF
  char v16; // [rsp+60h] [rbp+18h] BYREF

  v6 = *(unsigned __int8 *)(a2 + 2);
  if ( (_BYTE)v6 == 40 )
  {
    v7 = *(_DWORD *)(a2 + 20);
    v8 = *(_QWORD *)(a2 + 104);
  }
  else
  {
    v8 = *(_QWORD *)(a2 + 56);
    v7 = v6;
  }
  if ( (v8 & 0xFFF) != 0 )
    v8 = v8 - (v8 & 0xFFF) + 4096;
  if ( v7 )
  {
    a3 = 0x1C0000000uLL;
    switch ( v7 )
    {
      case 2:
      case 9:
      case 10:
        goto LABEL_6;
      case 7:
        v12 = *(_BYTE *)(a1 + 20) == 0;
        v14 = 0;
        if ( !v12 )
          NVMeControllerPowerDown(a1);
        GetSrbScsiAddress(a2, &v16, &v15, &v14);
        if ( v14 < *(_DWORD *)(a1 + 232) )
        {
          v13 = *(_QWORD *)(a1 + 8LL * v14 + 1952);
          if ( v13 )
            *(_DWORD *)(v13 + 20) |= 2u;
        }
        *(_BYTE *)(a2 + 3) = 1;
        break;
      case 37:
        if ( (_BYTE)v6 == 40 )
        {
          v10 = *(unsigned int *)(a2 + 120);
          v11 = *(_DWORD *)(v10 + a2 + 12);
          v12 = *(_DWORD *)(v10 + a2 + 16) == 1;
        }
        else
        {
          v11 = *(_DWORD *)(a2 + 8);
          v12 = *(_DWORD *)(a2 + 64) == 1;
        }
        if ( !v12 )
          goto LABEL_28;
        if ( v11 == 2 || v11 == 23 )
        {
          *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 32) & 0xFFFFFDF6 | 8;
          *(_BYTE *)(a2 + 3) = 1;
        }
        else if ( v11 == 4 )
        {
          *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 32) & 0xFFFFFDFC | 2;
          *(_BYTE *)(a2 + 3) = 1;
        }
        else
        {
LABEL_28:
          *(_BYTE *)(a2 + 3) = 6;
        }
        break;
      default:
        goto LABEL_28;
    }
  }
  else
  {
LABEL_6:
    if ( (*(_DWORD *)(a1 + 32) & 1) == 0 )
    {
      LOBYTE(a4) = 37;
      LOBYTE(a3) = 5;
      LOBYTE(v6) = 8;
      NVMeSetSenseData(a2, v6, a3, a4);
    }
  }
  if ( *(_BYTE *)(a2 + 3) )
  {
    StorPortNotification(0LL, a1, a2);
  }
  else
  {
    ProcessCommand(a1, a2);
    if ( v7 == 10 && (*(_BYTE *)(v8 + 4253) & 1) != 0 )
      WaitForCommandCompleteWithCustomTimeout(a1);
  }
  return 1;
}
