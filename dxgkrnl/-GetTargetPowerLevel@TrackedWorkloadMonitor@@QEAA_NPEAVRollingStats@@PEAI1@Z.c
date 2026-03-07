bool __fastcall TrackedWorkloadMonitor::GetTargetPowerLevel(
        TrackedWorkloadMonitor *this,
        struct RollingStats *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  unsigned int v5; // edx
  char v8; // r15
  unsigned int v9; // r8d
  char *v10; // rdi
  unsigned int v11; // r12d
  int v12; // r14d
  int v13; // ebx
  unsigned int v14; // ecx
  int v15; // ecx
  bool result; // al
  unsigned int v17; // [rsp+70h] [rbp+8h] BYREF
  unsigned int *v18; // [rsp+80h] [rbp+18h]

  v18 = a3;
  v5 = *((_DWORD *)a2 + 5);
  v8 = 0;
  v9 = *((_DWORD *)a2 + 6);
  v10 = (char *)this + 40 * *((unsigned int *)this + 56);
  v11 = *((_DWORD *)v10 + 12);
  v12 = *((_DWORD *)v10 + 6);
  v13 = v12;
  v17 = v11;
  if ( v5 >= v9 )
  {
    if ( v12 == 1 )
      goto LABEL_34;
    if ( v12 == 2 )
    {
LABEL_4:
      v14 = 100;
      v13 = 1;
      if ( *((_DWORD *)this + 2) )
        v14 = *((_DWORD *)this + 2);
      v17 = v14;
      goto LABEL_37;
    }
    if ( v12 != 3 )
    {
      switch ( v12 )
      {
        case 4:
        case 5:
          if ( !v10[61] && TrackedWorkloadMonitor::ShouldIncreasePower(this, a2, &v17) )
          {
            v13 = 4;
            v8 = 1;
            goto LABEL_17;
          }
          break;
        case 6:
          if ( !v10[61] && TrackedWorkloadMonitor::ShouldIncreasePower(this, a2, &v17) )
          {
            v13 = 4;
            goto LABEL_37;
          }
          if ( TrackedWorkloadMonitor::ShouldDecreasePower(this, a2, &v17) )
          {
            v13 = 5;
            goto LABEL_37;
          }
          if ( *((_DWORD *)v10 + 14) )
            goto LABEL_19;
          v8 = 1;
LABEL_18:
          if ( !v8 )
            goto LABEL_19;
LABEL_37:
          TrackedWorkloadMonitor::ChangeState((__int64)this, v13, a2, (__int64)(v10 + 24), v17);
          goto LABEL_21;
        case 7:
          v17 = 100;
          break;
        default:
          goto LABEL_19;
      }
    }
    if ( *((_DWORD *)v10 + 14) )
      goto LABEL_19;
    v13 = 6;
LABEL_17:
    if ( v13 != v12 )
      goto LABEL_37;
    goto LABEL_18;
  }
  if ( v12 != 1 )
  {
    if ( v12 != 2 )
      return 0;
    goto LABEL_4;
  }
LABEL_34:
  if ( !*((_DWORD *)v10 + 14) && v5 >= v9 )
  {
    RollingStats::Update(a2);
    *((_QWORD *)v10 + 4) = *((_QWORD *)a2 + 4);
    RollingStats::Update(a2);
    v13 = 6;
    *((_QWORD *)v10 + 5) = *((_QWORD *)a2 + 5);
    *((_DWORD *)v10 + 12) = v11;
    goto LABEL_37;
  }
LABEL_19:
  v15 = *((_DWORD *)v10 + 14);
  if ( !v15 )
    goto LABEL_22;
  *((_DWORD *)v10 + 14) = v15 - 1;
LABEL_21:
  TrackedWorkloadMonitor::ReportState(this);
LABEL_22:
  if ( v11 != v17 )
  {
    *a4 = v17;
    result = 1;
    *v18 = v11;
    return result;
  }
  return 0;
}
