/*
 * XREFs of ?GetProcess@VirtualAudioStreamInfo@@UEAAJPEAPEAUIAudioProcess@@@Z @ 0x1800099D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualAudioStreamInfo::GetProcess(VirtualAudioStreamInfo *this, struct IAudioProcess **a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IAudioProcess **))(**((_QWORD **)this + 2) + 144LL))(
           *((_QWORD *)this + 2),
           a2);
}
