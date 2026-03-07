_IO_RESOURCE_REQUIREMENTS_LIST *__fastcall FxIoResReqList::CreateWdmList(FxIoResReqList *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  FxCollectionInternal *v2; // rsi
  __int64 m_Count; // r9
  unsigned int v4; // edx
  unsigned int *v5; // r8
  FxIoResReqList *Flink; // rcx
  unsigned int *p_m_SlotNumber; // r8
  unsigned __int64 v9; // rax
  unsigned int v10; // ecx
  unsigned __int64 v11; // rax
  unsigned int v12; // ebx
  unsigned int v13; // eax
  unsigned int v14; // ebx
  unsigned int *Pool2; // rax
  _LIST_ENTRY *v16; // r10
  _LIST_ENTRY *v17; // rdx
  _LIST_ENTRY *v18; // rcx
  _LIST_ENTRY *v19; // r9
  _LIST_ENTRY *v20; // rax
  _LIST_ENTRY **v21; // r9
  _LIST_ENTRY **p_Blink; // rdx

  m_Globals = this->m_Globals;
  v2 = &this->FxCollectionInternal;
  m_Count = this->m_Count;
  v4 = 0;
  v5 = 0LL;
  if ( (_DWORD)m_Count )
  {
    Flink = (FxIoResReqList *)this->m_ListHead.Flink;
    while ( Flink != (FxIoResReqList *)&this->m_ListHead )
    {
      p_m_SlotNumber = &Flink[-1].m_SlotNumber;
      if ( v4 + *(_DWORD *)(*(_QWORD *)&Flink[-1].m_SlotNumber + 120LL) < v4 )
        goto $Overflow;
      Flink = (FxIoResReqList *)Flink->__vftable;
      v4 += *(_DWORD *)(*(_QWORD *)p_m_SlotNumber + 120LL);
    }
    v9 = 40LL * (unsigned int)(m_Count - 1);
    if ( v9 > 0xFFFFFFFF
      || (v10 = v9 + 72, (unsigned int)v9 >= 0xFFFFFFB8)
      || (v11 = 32LL * v4, v11 > 0xFFFFFFFF)
      || (v12 = v11 + v10, (unsigned int)v11 + v10 < v10)
      || (v13 = 32 * m_Count, (unsigned __int64)(32 * m_Count) > 0xFFFFFFFF)
      || v12 < v13 )
    {
$Overflow:
      WPP_IFR_SF_(m_Globals, 2u, 0xCu, 0xCu, WPP_FxResourceCollection_cpp_Traceguids);
      return 0LL;
    }
    v14 = v12 - v13;
    Pool2 = (unsigned int *)ExAllocatePool2(256LL, v14, m_Globals->Tag);
    v5 = Pool2;
    if ( Pool2 )
    {
      v16 = (_LIST_ENTRY *)(Pool2 + 8);
      v17 = this->m_ListHead.Flink;
      Pool2[1] = this->m_InterfaceType;
      Pool2[3] = this->m_SlotNumber;
      Pool2[7] = v2->m_Count;
      *Pool2 = v14;
      while ( 1 )
      {
        p_Blink = &v17[-1].Blink;
        if ( p_Blink == (_LIST_ENTRY **)v2 )
          break;
        v18 = *p_Blink;
        LODWORD(v16->Flink) = 65537;
        HIDWORD(v16->Flink) = v18[7].Blink;
        v16 = (_LIST_ENTRY *)((char *)v16 + 8);
        v19 = v18[8].Flink;
        while ( 1 )
        {
          v21 = &v19[-1].Blink;
          if ( v21 == &v18[7].Blink )
            break;
          v20 = *v21;
          *v16 = *(_LIST_ENTRY *)((char *)*v21 + 104);
          v16[1] = *(_LIST_ENTRY *)((char *)v20 + 120);
          v19 = v21[1];
          v16 += 2;
        }
        v17 = p_Blink[1];
      }
    }
  }
  return (_IO_RESOURCE_REQUIREMENTS_LIST *)v5;
}
