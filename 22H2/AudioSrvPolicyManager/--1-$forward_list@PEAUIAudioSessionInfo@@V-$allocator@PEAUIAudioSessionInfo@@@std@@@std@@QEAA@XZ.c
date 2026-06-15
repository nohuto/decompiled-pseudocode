/*
 * XREFs of ??1?$forward_list@PEAUIAudioSessionInfo@@V?$allocator@PEAUIAudioSessionInfo@@@std@@@std@@QEAA@XZ @ 0x1800090F8
 * Callers:
 *     _CDuckingManager::CDuckingManager_::_1_::dtor$2 @ 0x18003B200 (_CDuckingManager--CDuckingManager_--_1_--dtor$2.c)
 *     _CDuckingManager::ForEachDuckableSession_::_1_::dtor$0 @ 0x18003B56C (_CDuckingManager--ForEachDuckableSession_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180039D98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall std::forward_list<IAudioSessionInfo *>::~forward_list<IAudioSessionInfo *>(_QWORD **a1)
{
  _QWORD *result; // rax
  _QWORD *v2; // rbx

  result = *a1;
  *a1 = 0LL;
  if ( result )
  {
    do
    {
      v2 = (_QWORD *)*result;
      operator delete(result, (const struct std::nothrow_t *)0x10);
      result = v2;
    }
    while ( v2 );
  }
  return result;
}
