__int64 __fastcall CHolographicManager::WaitForVBlank(CHolographicManager *this)
{
  unsigned int v2; // ebx
  CHolographicInteropTaskQueue *v3; // rcx
  __int64 v4; // rax

  v2 = 0;
  v3 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 6);
  v4 = *((_QWORD *)this + 5);
  if ( v4
    && !*(_BYTE *)(v4 + 192)
    && v3
    && CHolographicInteropTaskQueue::PostMessageW(v3, 0x12u, 0LL, *((void **)this + 29), 0LL, 0LL, 0LL) )
  {
    WaitForSingleObject(*((HANDLE *)this + 29), 0x64u);
  }
  else
  {
    return 142213121;
  }
  return v2;
}
