/*
 * XREFs of ?RemoveResourceDebugInfo@CAnimationLoggingManager@@QEAAXPEAVCResource@@@Z @ 0x1800C42C8
 * Callers:
 *     ?ProcessSetComment@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMMENT@@PEBXI@Z @ 0x180034F08 (-ProcessSetComment@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATIONLOG.c)
 *     ??1CResource@@MEAA@XZ @ 0x1800A132C (--1CResource@@MEAA@XZ.c)
 *     ?DetachFromChannel@CNotificationResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1800C4230 (-DetachFromChannel@CNotificationResource@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DetachFromChannel@CResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1800CCB20 (-DetachFromChannel@CResource@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?ProcessSetDiagnosticItemId@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETDIAGNOSTICITEMID@@@Z @ 0x1801B0FF8 (-ProcessSetDiagnosticItemId@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANI.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800C3864 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?erase@?$list@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@2@@Z @ 0x1800CE744 (-erase@-$list@U-$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@V-$alloc.c)
 */

void __fastcall CAnimationLoggingManager::RemoveResourceDebugInfo(CAnimationLoggingManager *this, struct CResource *a2)
{
  __int64 v4; // r8
  unsigned __int64 i; // r9
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 *v8; // rsi
  __int64 v9; // rcx
  __int64 *j; // r11
  __int64 *v11; // rax
  __int64 appended; // rax
  _QWORD *v13; // r11
  __int64 v14; // rdx
  struct CResource *v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = a2;
  v4 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
  {
    v6 = *((unsigned __int8 *)&v15 + i);
    v4 = 0x100000001B3LL * (v6 ^ v4);
  }
  v7 = *((_QWORD *)this + 14);
  v8 = (__int64 *)*((_QWORD *)this + 12);
  v9 = 2 * (v4 & *((_QWORD *)this + 17));
  for ( j = *(__int64 **)(v7 + 16 * (v4 & *((_QWORD *)this + 17))); ; j = (__int64 *)*j )
  {
    v11 = *(__int64 **)(v7 + 16 * (v4 & *((_QWORD *)this + 17))) == v8
        ? (__int64 *)*((_QWORD *)this + 12)
        : **(__int64 ***)(v7 + 16 * (v4 & *((_QWORD *)this + 17)) + 8);
    if ( j == v11 )
      break;
    if ( (struct CResource *)j[2] == a2 )
      goto LABEL_8;
  }
  j = (__int64 *)*((_QWORD *)this + 12);
LABEL_8:
  if ( j != v8 )
  {
    appended = std::_Fnv1a_append_bytes(v9, (const unsigned __int8 *const)j + 16, 8uLL);
    v14 = 2 * (*((_QWORD *)this + 17) & appended);
    if ( *(_QWORD **)(v7 + 16 * (*((_QWORD *)this + 17) & appended) + 8) == v13 )
    {
      if ( *(_QWORD **)(v7 + 16 * (*((_QWORD *)this + 17) & appended)) == v13 )
      {
        *(_QWORD *)(v7 + 16 * (*((_QWORD *)this + 17) & appended)) = v8;
        *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v14 + 8) = *((_QWORD *)this + 12);
      }
      else
      {
        *(_QWORD *)(v7 + 16 * (*((_QWORD *)this + 17) & appended) + 8) = v13[1];
      }
    }
    else if ( *(_QWORD **)(v7 + 16 * (*((_QWORD *)this + 17) & appended)) == v13 )
    {
      *(_QWORD *)(v7 + 16 * (*((_QWORD *)this + 17) & appended)) = *v13;
    }
    std::list<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>::erase(
      (char *)this + 96,
      &v15,
      v13);
  }
  *((_DWORD *)a2 + 8) &= ~0x10u;
}
