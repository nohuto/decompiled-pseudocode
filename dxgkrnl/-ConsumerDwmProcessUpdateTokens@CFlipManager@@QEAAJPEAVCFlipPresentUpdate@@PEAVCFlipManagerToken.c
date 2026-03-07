__int64 __fastcall CFlipManager::ConsumerDwmProcessUpdateTokens(
        CFlipManager *this,
        struct CFlipPresentUpdate *a2,
        struct CFlipManagerToken *a3,
        struct _LIST_ENTRY *a4)
{
  char *v5; // r12
  bool v9; // bl
  struct FlipManagerObject *v10; // rdx
  struct CFlipPropertySet *v11; // r8
  NTSTATUS updated; // ebx
  char *p_Blink; // rsi
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY *v15; // rcx
  struct _LIST_ENTRY **v16; // rax
  __int64 v17; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY v20; // [rsp+30h] [rbp-20h] BYREF
  struct _LIST_ENTRY *v21; // [rsp+40h] [rbp-10h] BYREF
  char v22; // [rsp+48h] [rbp-8h]
  bool v23; // [rsp+80h] [rbp+30h] BYREF

  v5 = (char *)this - 32;
  v9 = 0;
  if ( (unsigned int)Feature_CompositionTextures__private_IsEnabledDeviceUsage() )
    v9 = *((_DWORD *)this + 82) == 2;
  v11 = (struct CFlipPropertySet *)*((_QWORD *)a2 + 7);
  v20.Blink = &v20;
  v20.Flink = &v20;
  updated = CEndpointResourceStateManager::PrepareUpdateTokens((CFlipManager *)((char *)this + 104), v10, v11, v9, &v20);
  v22 = 1;
  v21 = &v20;
  if ( updated >= 0 )
  {
    CEndpointResourceStateManager::CommitPendingUpdates((CFlipManager *)((char *)this + 104));
    while ( v20.Flink != &v20 )
    {
      p_Blink = (char *)&v20.Flink[-1].Blink;
      Flink = v20.Flink;
      v15 = v20.Flink->Flink;
      if ( v20.Flink->Flink->Blink != v20.Flink
        || (v16 = (struct _LIST_ENTRY **)*((_QWORD *)p_Blink + 2), *v16 != v20.Flink) )
      {
LABEL_15:
        __fastfail(3u);
      }
      *v16 = v15;
      v15->Blink = (struct _LIST_ENTRY *)v16;
      updated = ObReferenceObjectByPointer(v5, 3u, g_pDxgkCompositionObjectType, 0);
      if ( updated < 0 )
        goto LABEL_13;
      *((_QWORD *)p_Blink + 14) = *((_QWORD *)a3 + 12);
      CFlipContentToken::SetFlipManagerObjectPreReferenced((CFlipContentToken *)p_Blink, (struct FlipManagerObject *)v5);
      *((_QWORD *)p_Blink + 13) = *((_QWORD *)a2 + 8);
      v17 = *((_QWORD *)a3 + 8);
      p_Blink[288] = *(_BYTE *)(v17 + 24);
      p_Blink[291] = *(_BYTE *)(v17 + 77);
      p_Blink[289] = *(_BYTE *)(v17 + 78);
      p_Blink[290] = *(_BYTE *)(v17 + 76);
      *((_QWORD *)p_Blink + 37) = *(_QWORD *)(v17 + 64);
      *((_DWORD *)p_Blink + 76) = *(_DWORD *)(v17 + 56);
      *((_DWORD *)p_Blink + 77) = *(_DWORD *)(v17 + 72);
      *((_QWORD *)p_Blink + 39) = *(_QWORD *)(v17 + 48);
      updated = CFlipContentToken::InFrame((CFlipContentToken *)p_Blink, &v23);
      if ( updated < 0 )
        goto LABEL_13;
      if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)p_Blink + 152LL))(p_Blink) )
      {
        Blink = a4->Blink;
        if ( Blink->Flink != a4 )
          goto LABEL_15;
        Flink->Flink = a4;
        *((_QWORD *)p_Blink + 2) = Blink;
        Blink->Flink = Flink;
        a4->Blink = Flink;
      }
      else
      {
LABEL_13:
        (*(void (__fastcall **)(char *))(*(_QWORD *)p_Blink + 56LL))(p_Blink);
        (**(void (__fastcall ***)(char *, __int64))p_Blink)(p_Blink, 1LL);
        if ( updated < 0 )
          break;
      }
    }
  }
  v22 = 0;
  lambda_cfa85ae072c89c165dff36c328ecf84d_::operator()((_QWORD **)&v21);
  return (unsigned int)updated;
}
