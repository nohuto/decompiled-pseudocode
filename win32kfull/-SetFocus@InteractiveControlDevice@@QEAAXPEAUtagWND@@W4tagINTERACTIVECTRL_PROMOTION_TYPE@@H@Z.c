void __fastcall InteractiveControlDevice::SetFocus(__int64 a1, struct tagWND *a2, unsigned int a3, int a4)
{
  struct _LIST_ENTRY *v4; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  struct InteractiveControlInput *v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  InteractiveControlInput *v17; // rax
  InteractiveControlInput *v18; // r15
  void *v19; // rcx
  InteractiveControlInput *v20; // rax
  struct _LIST_ENTRY *v21; // r14
  struct InteractiveControlInput *v22; // [rsp+50h] [rbp+8h] BYREF

  v22 = 0LL;
  v4 = (struct _LIST_ENTRY *)(a1 + 16);
  if ( *(_DWORD *)(a1 + 364) && *(_QWORD *)(a1 + 368) )
    v4 = *(struct _LIST_ENTRY **)(a1 + 368);
  if ( a2 != *(struct tagWND **)(a1 + 40) )
  {
    if ( (unsigned int)InteractiveControlDevice::GetPreviousInputReport(
                         (InteractiveControlDevice *)a1,
                         v4,
                         (struct _LIST_ENTRY **)&v22) )
    {
      if ( a2 )
        v11 = *(_QWORD *)a2;
      else
        v11 = 0LL;
      v12 = v22;
      v13 = *((_QWORD *)v22 + 2);
      if ( v13 == v11 )
        goto LABEL_21;
      v14 = ValidateHwnd(v13);
      if ( v14 )
        InteractiveControlInput::GenerateMessages(v12, v14, *(unsigned int *)(a1 + 64), 16LL);
      v17 = (InteractiveControlInput *)Win32AllocPool(96LL, 1819440195LL, v15, v16);
      if ( v17 )
        v18 = InteractiveControlInput::InteractiveControlInput(v17, (struct InteractiveControlDevice *)a1);
      else
        v18 = 0LL;
      *(_OWORD *)((char *)v18 + 52) = *(_OWORD *)((char *)v12 + 52);
      *(_QWORD *)((char *)v18 + 68) = *(_QWORD *)((char *)v12 + 68);
      *((_DWORD *)v18 + 19) = *((_DWORD *)v12 + 19);
      InteractiveControlDevice::QueueInput((InteractiveControlDevice *)a1, v4, (struct _LIST_ENTRY *)v18);
      v19 = v18;
    }
    else
    {
      v20 = (InteractiveControlInput *)Win32AllocPool(96LL, 1819440195LL, v9, v10);
      if ( v20 )
        v21 = (struct _LIST_ENTRY *)InteractiveControlInput::InteractiveControlInput(
                                      v20,
                                      (struct InteractiveControlDevice *)a1);
      else
        v21 = 0LL;
      InteractiveControlDevice::QueueInput((InteractiveControlDevice *)a1, v4, v21);
      v19 = v21;
    }
    InteractiveControlInput::GenerateMessages(v19, a2, a3, 8LL);
LABEL_21:
    InteractiveControlDevice::SetTargetWindow((InteractiveControlDevice *)a1, a2);
  }
  if ( a4 )
  {
    if ( a3 != *(_DWORD *)(a1 + 64) )
      InteractiveControlDevice::SetMessagePromotionType(a1, a3);
  }
}
