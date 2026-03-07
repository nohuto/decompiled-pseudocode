__int64 __fastcall MiUpdateSystemProtoPtesTree(unsigned __int64 *a1, int a2)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rsi
  _QWORD *v6; // rdx
  bool v7; // r8
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 result; // rax
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v18; // zf
  __int64 v19; // [rsp+30h] [rbp+8h] BYREF

  v19 = 0LL;
  v4 = MiObtainProtoBaseFromNode(a1, &v19);
  v5 = ExAcquireSpinLockExclusive(&dword_140C653B8);
  if ( !a2 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140C653B0, a1);
    a1[3] &= ~8uLL;
    goto LABEL_12;
  }
  v6 = (_QWORD *)qword_140C653B0;
  v7 = 0;
  if ( !qword_140C653B0 )
    goto LABEL_11;
  while ( 1 )
  {
    v8 = v6[3] & 7LL;
    if ( v8 > 4 )
      break;
    if ( (_DWORD)v8 )
    {
      v12 = v8 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            if ( v14 != 1 )
              break;
            v9 = v6[4];
          }
          else
          {
            v9 = v6[6];
          }
        }
        else
        {
          v9 = *(_QWORD *)(*(v6 - 7) + 136LL);
        }
      }
      else
      {
        v9 = *(v6 - 6);
      }
    }
    else
    {
      v9 = *(v6 - 14);
    }
    if ( v4 >= v9 )
      break;
    v10 = (_QWORD *)*v6;
    if ( !*v6 )
      goto LABEL_11;
LABEL_8:
    v6 = v10;
  }
  v10 = (_QWORD *)v6[1];
  if ( v10 )
    goto LABEL_8;
  v7 = 1;
LABEL_11:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C653B0, (unsigned __int64)v6, v7, (unsigned __int64)a1);
  a1[3] |= 8uLL;
LABEL_12:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C653B8);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v18 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v18 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v5);
  return result;
}
