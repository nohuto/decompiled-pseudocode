__int64 __fastcall IopSetIrpPriorityHintFromFileObject(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  int BaseIoPriorityThread; // edx
  __int64 v5; // r9
  __int64 result; // rax
  int v7; // edx

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 208);
  if ( v3 && *(_DWORD *)(v3 + 88) )
  {
    result = *(_DWORD *)(v2 + 16) & 0xFFF1FFFF;
    *(_DWORD *)(v2 + 16) = result;
    v7 = *(_DWORD *)(v3 + 88) << 17;
  }
  else
  {
    BaseIoPriorityThread = PsGetBaseIoPriorityThread(KeGetCurrentThread(), v3, v2);
    if ( BaseIoPriorityThread < 2 && (struct _KTHREAD *)v5 == KeGetCurrentThread() && *(_DWORD *)(v5 + 1440) )
      BaseIoPriorityThread = 2;
    result = *(_DWORD *)(v2 + 16) & 0xFFF1FFFF;
    *(_DWORD *)(v2 + 16) = result;
    v7 = (BaseIoPriorityThread << 17) + 0x20000;
  }
  *(_DWORD *)(v2 + 16) = result | v7;
  return result;
}
