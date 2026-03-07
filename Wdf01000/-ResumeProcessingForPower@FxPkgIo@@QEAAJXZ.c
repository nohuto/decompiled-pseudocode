__int64 __fastcall FxPkgIo::ResumeProcessingForPower(FxPkgIo *this)
{
  const void *_a1; // rax
  unsigned __int8 v3; // r8
  unsigned __int8 v4; // dl
  unsigned __int8 v5; // r8
  unsigned __int8 v6; // r8
  _SINGLE_LIST_ENTRY *Next; // rbx
  _SINGLE_LIST_ENTRY *v8; // rsi
  bool v9; // zf
  _SINGLE_LIST_ENTRY *v10; // rdi
  unsigned __int8 v11; // r8
  unsigned __int16 v12; // r9
  FxIoQueue *v13; // rcx
  unsigned __int8 v14; // dl
  _SINGLE_LIST_ENTRY *v15; // rdi
  unsigned __int16 v16; // r9
  _SINGLE_LIST_ENTRY *v17; // rsi
  unsigned __int8 PreviousIrql; // [rsp+60h] [rbp+28h] BYREF
  unsigned __int8 irql; // [rsp+68h] [rbp+30h] BYREF
  unsigned __int8 v21; // [rsp+70h] [rbp+38h] BYREF
  _SINGLE_LIST_ENTRY queueList; // [rsp+78h] [rbp+40h] BYREF

  irql = 0;
  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  WPP_IFR_SF_q(this->m_Globals, 4u, 0xDu, 0x1Fu, WPP_FxPkgIo_cpp_Traceguids, _a1);
  queueList.Next = 0LL;
  FxNonPagedObject::Lock(this, &irql, v3);
  FxPkgIo::GetIoQueueListLocked(this, &queueList, (void *)1);
  v4 = irql;
  *(_WORD *)&this->m_PowerStateOn = 1;
  FxNonPagedObject::Unlock(this, v4, v5);
  Next = queueList.Next;
  v8 = queueList.Next;
  v9 = queueList.Next == 0LL;
  if ( !queueList.Next )
    goto LABEL_14;
  do
  {
    v10 = v8 - 116;
    PreviousIrql = 0;
    if ( BYTE2(v8[-99].Next) )
    {
      FxNonPagedObject::Lock((FxNonPagedObject *)&v8[-116], &PreviousIrql, v6);
      v13 = (FxIoQueue *)&v8[-116];
      v14 = PreviousIrql;
      if ( LODWORD(v10[22].Next) == 1 )
      {
        FxNonPagedObject::Unlock(v13, PreviousIrql, v11);
      }
      else
      {
        LODWORD(v10[22].Next) = 10;
        FxIoQueue::DispatchEvents(v13, v14, 0LL, v12);
      }
    }
    v8 = v8->Next;
  }
  while ( v8 );
  while ( 1 )
  {
    v9 = Next == 0LL;
LABEL_14:
    v17 = Next;
    if ( !v9 )
    {
      Next = Next->Next;
      queueList.Next = Next;
    }
    if ( !v17 )
      break;
    v15 = v17 - 116;
    v21 = 0;
    if ( BYTE2(v17[-99].Next) )
    {
      FxNonPagedObject::Lock((FxNonPagedObject *)&v17[-116], &v21, v6);
      if ( SLODWORD(v15[28].Next) > 0 )
      {
        BYTE4(v15[46].Next) = 1;
        BYTE5(v15[46].Next) = 0;
      }
      FxIoQueue::DispatchEvents((FxIoQueue *)&v17[-116], v21, 0LL, v16);
      Next = queueList.Next;
    }
    v17->Next = 0LL;
    ((void (__fastcall *)(_SINGLE_LIST_ENTRY **, __int64, __int64, const char *))v15->Next[2].Next)(
      &v17[-116].Next,
      1702326128LL,
      1328LL,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
  }
  return 0LL;
}
