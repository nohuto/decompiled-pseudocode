void __fastcall CHolographicFrameProcessor::GetDirtyRects(
        CHolographicFrameProcessor *this,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        struct tagRECT *a5,
        bool *a6)
{
  *a4 = 1;
  *(_QWORD *)&a5->left = 0LL;
  a5->right = *((_DWORD *)this + 7);
  a5->bottom = *((_DWORD *)this + 8);
  *a6 = 0;
}
